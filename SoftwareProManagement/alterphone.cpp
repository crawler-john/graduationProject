#include "alterphone.h"
#include "ui_alterphone.h"
#include <QMouseEvent>
AlterPhone::AlterPhone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterPhone)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
}

AlterPhone::~AlterPhone()
{
    delete ui;
}

void AlterPhone::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AlterPhone::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void AlterPhone::on_BtnConfirm_clicked()
{
    ui->errorInfo->clear();
    QString Newphone = ui->newPhone->text();
    if(!Newphone.isEmpty())
    {
        emit sigGetNewPhone(Newphone);
        close();
    }else
    {
        ui->errorInfo->setText("请输入您的电话~~");
    }

}
