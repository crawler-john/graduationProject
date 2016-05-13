#include "adduser.h"
#include "ui_adduser.h"
#include <QMouseEvent>

AddUser::AddUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUser)
{

    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);



}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AddUser::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
