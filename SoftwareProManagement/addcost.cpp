#include "addcost.h"
#include "ui_addcost.h"
#include <QMouseEvent>

addCost::addCost(DBManager *DbManager,QString proName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCost)
{
    m_dbmanager = DbManager;
    m_proName = proName;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    QStringList list;
    m_dbmanager->DBGetStaff(list);

    ui->proName->addItem(proName);
}

addCost::~addCost()
{
    delete ui;
}

void addCost::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addCost::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void addCost::on_BtnConfirm_clicked()
{
    if((ui->Describe->toPlainText().isEmpty()) || (ui->title->text().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        int proID;

        m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);
        proCost procost;

        procost.setproID(proID);
        procost.setTitle(ui->title->text());
        procost.setMoney(ui->money->value());
        procost.setDescribe(ui->Describe->toPlainText());

        bool flag = m_dbmanager->DBInsertProCost(procost);
        if(flag == DBManager::DB_SUCCESS)
        {
            ui->Info->setText("添加成本项成功！");
            emit sigAddProCostInfoSuccess();
        }else
        {
            ui->Info->setText("添加成本项失败");
        }


    }
}
