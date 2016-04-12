#include "setsqlserver.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>

SetSQLServer::SetSQLServer(QWidget *parent) :
    QDialog(parent)
{
    QPixmap pix;
    pix.load("img/Login1.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
    resize(250,180);
    setMask(QBitmap(pix.mask()));
    setWindowFlags(Qt::FramelessWindowHint);

}


void SetSQLServer::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void SetSQLServer::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }else if(event->buttons()&Qt::RightButton)
    {
        close();
    }
}

void SetSQLServer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("img/Login1.png"));

}
