#include "monthly.h"
#include "ui_monthly.h"
#include <QMouseEvent>

Monthly::Monthly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monthly)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(this,SIGNAL(rejected()),this,SLOT(close()));
}

Monthly::~Monthly()
{
    delete ui;
}

void Monthly::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void Monthly::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}