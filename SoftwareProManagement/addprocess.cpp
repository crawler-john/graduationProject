#include "addprocess.h"
#include "ui_addprocess.h"
#include <QMouseEvent>

addProcess::addProcess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProcess)
{
    ui->setupUi(this);
        setWindowFlags(Qt::FramelessWindowHint);
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
