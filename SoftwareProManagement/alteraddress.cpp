#include "alteraddress.h"
#include "ui_alteraddress.h"
#include <QMouseEvent>
AlterAddress::AlterAddress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterAddress)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
}

AlterAddress::~AlterAddress()
{
    delete ui;
}

void AlterAddress::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AlterAddress::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void AlterAddress::on_BtnConfirm_clicked()
{
    ui->errorInfo->clear();
    QString NewAddress = ui->newAddress->text();
    if(!NewAddress.isEmpty())
    {
        emit sigGetNewAddress(NewAddress);
        close();
    }else
    {
        ui->errorInfo->setText("请输入您的地址~~");
    }
}
