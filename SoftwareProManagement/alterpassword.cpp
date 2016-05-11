#include "alterpassword.h"
#include "ui_alterpassword.h"
#include <QMouseEvent>

alterPassword::alterPassword(QString oldPassword,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alterPassword)
{
    this->oldPassword = oldPassword;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->oldPassword->clear();
    ui->newPassword->clear();
    ui->confirmPassword->clear();
    ui->oldPassword->setEchoMode (QLineEdit::Password);
    ui->newPassword->setEchoMode (QLineEdit::Password);
    ui->confirmPassword->setEchoMode (QLineEdit::Password);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
}

alterPassword::~alterPassword()
{
    disconnect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    delete ui;
}

void alterPassword::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void alterPassword::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void alterPassword::on_BtnConfirm_clicked()
{
    ui->errorNewPassword->clear();
    ui->infosetpassword->clear();
    QString newPassword,confirmPassword,oldPassword;
    newPassword = ui->newPassword->text();
    confirmPassword = ui->confirmPassword->text();
    oldPassword = ui->oldPassword->text();
    if(this->oldPassword == oldPassword)
    {

        if(confirmPassword == newPassword)
        {
            if(newPassword.length() >= 6)
            {
               emit sigGetNewPassword(newPassword);
            }else
            {
                ui->errorNewPassword->setText("密码过短！");
            }

        }else
        {
            ui->errorNewPassword->setText("两次密码不同！");
        }
    }else
    {
        ui->infosetpassword->setText("原密码错误！");
    }
}

void alterPassword::SlotAlterPassword(bool status)
{
    if(status == true)
    {
        ui->infosetpassword->setText("设置成功！");
    }else
    {
        ui->infosetpassword->setText("服务器异常！");
    }
}
