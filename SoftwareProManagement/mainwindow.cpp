#include "mainwindow.h"
#include <QMouseEvent>
#include <QPainter>
#include <QBitmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPixmap pix;
    pix.load("img/Login.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
    resize(431,331);
    setMask(QBitmap(pix.mask()));
    setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("img/Login.png"));

}
