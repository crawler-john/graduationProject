#include "addrequest.h"
#include "ui_addrequest.h"
#include <QMouseEvent>

addRequest::addRequest(DBManager *DbManager,QString proName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRequest)
{
    m_dbmanager = DbManager;
    m_proName = proName;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));


    ui->proName->addItem(proName);
    setWindowTitle("添加需求");
}

addRequest::~addRequest()
{
    delete ui;
}

void addRequest::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addRequest::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void addRequest::on_BtnConfirm_clicked()
{
    if((ui->Describe->toPlainText().isEmpty()) || (ui->requestName->text().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        int proID;

        m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);

        requestInfo prorequest;


        prorequest.setRequestName(ui->requestName->text());
        prorequest.settimeCreate(QDate::currentDate());
        prorequest.setProID(proID);
        prorequest.setRequestDescribe(ui->Describe->toPlainText());
        prorequest.setRequestType(ui->requestType->currentIndex());
        prorequest.setRequestState(ui->requestState->currentText());
        //插入相关信息
        bool flag = m_dbmanager->DBInsertProRequest(prorequest);


        if(flag == DBManager::DB_SUCCESS)
        {
            ui->Info->setText("添加新的需求项成功！");
            emit sigAddProRequestInfoSuccess();
        }else
        {
            ui->Info->setText("添加新的需求项成功！");
        }
    }
}
