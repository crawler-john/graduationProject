#include "addprostaff.h"
#include "ui_addprostaff.h"
#include <QMouseEvent>
#include "dbmanager.h"

addProStaff::addProStaff(DBManager *DbManager,QString proName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProStaff)
{
    m_dbmanager = DbManager;
    m_proName = proName;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    QStringList list;
    m_dbmanager->DBGetStaff(list);
    ui->name->addItems(list);
    ui->proname->addItem(proName);
    setWindowTitle("添加项目人员");

}

addProStaff::~addProStaff()
{
    delete ui;
}

void addProStaff::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addProStaff::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void addProStaff::on_BtnConfirm_clicked()
{

    if((ui->proDescribe->toPlainText().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        QString name = ui->name->currentText();
        QString ID;
        int workYears;

        int proID;
        //查询项目信息
        m_dbmanager->DBSelectUser(name,ID,workYears);
        m_dbmanager->DBSelectPro(ui->proname->currentText(),proID);
        proStaffInfo prostaffinfo;
        prostaffinfo.setUserID(ID);
        prostaffinfo.setProID(proID);
        prostaffinfo.setPost(ui->post->currentText());
        prostaffinfo.setStopUse(false);
        prostaffinfo.setDescribe(ui->proDescribe->toPlainText());
        prostaffinfo.setWorkyears(workYears);

        prostaffinfo.setOutSourcing(ui->outsourcing->isChecked());


        bool flag = m_dbmanager->DBInsertProStaff(prostaffinfo);
        if(flag == DBManager::DB_SUCCESS)
        {
            ui->Info->setText("添加项目人员成功！");
            emit sigAddProStaffInfoSuccess();
        }else
        {
            ui->Info->setText("人员已经在项目中！");
        }


    }
}
