#include "alteremail.h"
#include "ui_alteremail.h"
#include <QMouseEvent>

AlterEmail::AlterEmail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterEmail)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    setWindowTitle("修改邮箱");
}

AlterEmail::~AlterEmail()
{
    delete ui;
}

void AlterEmail::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AlterEmail::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void AlterEmail::on_BtnConfirm_clicked()
{
    ui->errorInfo->clear();
    QString NewEmail = ui->newEmail->text();
    if(!NewEmail.isEmpty())
    {
        emit sigGetNewEmail(NewEmail);
        close();
    }else
    {
        ui->errorInfo->setText("请输入您的邮箱~~");
    }
}
