#include "addrequest.h"
#include "ui_addrequest.h"
#include <QMouseEvent>

addRequest::addRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRequest)
{
    ui->setupUi(this);
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
