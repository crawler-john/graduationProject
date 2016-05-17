#include "addproject.h"
#include "ui_addproject.h"
#include <QMouseEvent>

AddProject::AddProject(DBManager *DbManager,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProject)
{
    m_DbManager = DbManager;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->planStartYear->setRange(2010,2050);
    ui->planStartMonth->setRange(1,12);
    ui->planStartDay->setRange(1,31);
    ui->planEndYear->setRange(2010,2050);
    ui->planEndMonth->setRange(1,12);
    ui->planEndDay->setRange(1,31);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    //获取项目经理
    QStringList List;
    m_DbManager->DBGetManagers(List);
    ui->proManager->addItems(List);
    setWindowTitle("添加项目");
}

AddProject::~AddProject()
{
    delete ui;
}

void AddProject::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AddProject::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
//添加新项目操作
void AddProject::on_BtnConfirm_clicked()
{
    if((ui->proName->text().isEmpty())|| (ui->proClient->text().isEmpty()) || (ui->proDescribe->toPlainText().isEmpty()) || (ui->proCost->text().isEmpty()) || (ui->proAddress->text().isEmpty()))
    {
        ui->proInfo->setText("输入信息不完全！");
    }else
    {
        ProInfo proinfo;
        QDate planStart,planEnd;
        planStart.setDate(ui->planStartYear->text().toInt(),ui->planStartMonth->text().toInt(),ui->planStartDay->text().toInt());
        planEnd.setDate(ui->planEndYear->text().toInt(),ui->planEndMonth->text().toInt(),ui->planEndDay->text().toInt());
        proinfo.setName(ui->proName->text());
        proinfo.setClient(ui->proClient->text());
        proinfo.setDescribe(ui->proDescribe->toPlainText());
        proinfo.setMoney(ui->proCost->text().toInt());
        proinfo.setManager(ui->proManager->currentText());
        proinfo.setState(ui->proState->currentText());
        proinfo.setAddress(ui->proAddress->text());
        proinfo.setPriority(ui->proPriority->currentIndex());
        proinfo.setCreate(QDate::currentDate());
        proinfo.setPlanStart(planStart);
        proinfo.setPlanEnd(planEnd);
        m_DbManager->DBInsertProject(proinfo);
        ui->proInfo->setText("添加项目成功！");
        emit sigAddProInfoSuccess();
    }

}
