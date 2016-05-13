#include "addprostaff.h"
#include "ui_addprostaff.h"
#include <QMouseEvent>

addProStaff::addProStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProStaff)
{
    ui->setupUi(this);
}

addProStaff::~addProStaff()
{
    delete ui;
}

void addProStaff::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void addProStaff::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
