#include "daily.h"
#include "ui_daily.h"
#include <QMouseEvent>

Daily::Daily(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Daily)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

Daily::~Daily()
{
    delete ui;
}

void Daily::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}


void Daily::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void Daily::on_buttonBox_rejected()
{
    this->close();
}

