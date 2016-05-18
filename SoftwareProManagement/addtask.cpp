#include "addtask.h"
#include "ui_addtask.h"
#include <QMouseEvent>

addTask::addTask(DBManager *DbManager,QString proName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask)
{
    m_dbmanager = DbManager;
    m_proName = proName;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    ui->planStartYear->setRange(1900,QDate::currentDate().year());
    ui->planStartMonth->setRange(1,12);
    ui->planStartDay->setRange(1,31);
    ui->planEndYear->setRange(1900,QDate::currentDate().year());
    ui->planEndMonth->setRange(1,12);
    ui->planEndDay->setRange(1,31);


    ui->proName->addItem(proName);

    //添加相关需求和执行者

    int proID;

    m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);
    QStringList exectorList,requestList;
    m_dbmanager->DBGetProStaffByProID(exectorList,proID);
    m_dbmanager->DBGetProRequestByProID(requestList,proID);
    ui->taskexector->addItems(exectorList);
    ui->taskrequest->addItems(requestList);
    setWindowTitle("添加任务");
}

addTask::~addTask()
{
    delete ui;
}

void addTask::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addTask::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void addTask::on_BtnConfirm_clicked()
{


    if((ui->taskDescribe->toPlainText().isEmpty()) || (ui->taskname->text().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        int proID;

        m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);

        Taskinfo protask;

        protask.setproID(proID);
        protask.settaskName(ui->taskname->text());
        protask.settimeCreate(QDate::currentDate());
        protask.settaskExecutorName(ui->taskexector->currentText());
        //查询执行者的ID
        QString userId;
        m_dbmanager->DBGetUserID(ui->taskexector->currentText(),userId);
        protask.settaskExecutorID(userId);
        protask.settaskDescribe(ui->taskDescribe->toPlainText());
        protask.settaskPriority(ui->taskprioriy->currentIndex());
        protask.settimePlanStart(QDate(ui->planStartYear->value(),ui->planStartMonth->value(),ui->planStartDay->value()));
        protask.settimePlanEnd(QDate(ui->planEndYear->value(),ui->planEndMonth->value(),ui->planEndDay->value()));

        //插入相关信息
        bool flag = m_dbmanager->DBInsertProTask(protask);
        //插入相关信息表
        int request_id,task_id;
        flag = m_dbmanager->DBSelectRequestID(proID,ui->taskrequest->currentText(),request_id);
        flag = m_dbmanager->DBSelectTaskID(proID,ui->taskname->text(),task_id);

        qDebug() << request_id <<"    " << task_id;
        flag = m_dbmanager->DBInsertTaskRequest(request_id,task_id);
        if(flag == DBManager::DB_SUCCESS)
        {
            ui->Info->setText("添加新的任务成功！");
            emit sigAddProTaskInfoSuccess();
        }else
        {
            ui->Info->setText("添加新的任务成功！");
        }
    }

}
