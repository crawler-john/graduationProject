#include "addproject.h"
#include "ui_addproject.h"
#include <QMouseEvent>

AddProject::AddProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProject)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
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
