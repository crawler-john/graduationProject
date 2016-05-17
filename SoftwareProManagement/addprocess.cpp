#include "addprocess.h"
#include "ui_addprocess.h"
#include <QMouseEvent>

addProcess::addProcess(DBManager *DbManager,QString proName,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProcess)
{
    m_dbmanager = DbManager;
    m_proName = proName;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    QStringList list;
    m_dbmanager->DBGetStaff(list);

    ui->proName->addItem(proName);

    int proID;

    m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);
    QStringList TaskList;
    m_dbmanager->DBGetProProcessByProID(TaskList,proID);
    ui->processTaskName->addItems(TaskList);
    setWindowTitle("添加进度");


}

addProcess::~addProcess()
{
    delete ui;
}

void addProcess::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addProcess::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void addProcess::on_BtnConfirm_clicked()
{
    if((ui->Describe->toPlainText().isEmpty()) || (ui->processName->text().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        int proID;

        m_dbmanager->DBSelectPro(ui->proName->currentText(),proID);

        ProcessInfo proprocess;

        proprocess.setproID(proID);
        proprocess.setprocessName(ui->processName->text());
        proprocess.settimeCreate(QDate::currentDate());
        proprocess.setprocessDescribe(ui->Describe->toPlainText());



        //插入相关信息
        bool flag = m_dbmanager->DBInsertProProcess(proprocess);
        //插入相关信息表
        int task_id,process_id;
        flag = m_dbmanager->DBSelectTaskID(proID,ui->processTaskName->currentText(),task_id);
        flag = m_dbmanager->DBSelectProcessID(proID,ui->processName->text(),process_id);

        qDebug() << process_id <<"    " << task_id;
        flag = m_dbmanager->DBInsertProcessTask(task_id,process_id);
        if(flag == DBManager::DB_SUCCESS)
        {
            ui->Info->setText("添加成本项成功！");
            emit sigAddProProcessInfoSuccess();
        }else
        {
            ui->Info->setText("添加成本项失败");
        }
    }
}
