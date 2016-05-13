#include "addtask.h"
#include "ui_addtask.h"
#include <QMouseEvent>

addTask::addTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask)
{
    ui->setupUi(this);
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
