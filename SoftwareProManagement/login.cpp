#include "login.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include <QDebug>

login::login(QWidget *parent) :
    QWidget(parent)
{
    QPixmap pix;
    pix.load("img/Login1.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
    resize(431,331);
    setMask(QBitmap(pix.mask()));
    setWindowFlags(Qt::FramelessWindowHint);
    createLogin();

}

void login::createLogin()
{

    btnLogin = new QPushButton("",this);
    btnLogin->setGeometry(173,284,148,32);
    btnLogin->setStyleSheet("background-image:url(img/btnLogin.png);");
    btnLogin->setFlat(true);
    connect(btnLogin,SIGNAL(clicked()),this,SLOT(userLogin()));

    lineEditAccount = new QLineEdit(this);
    lineEditAccount->setGeometry(174,199,146,31);

    lineEditPassword = new QLineEdit(this);
    lineEditPassword->setEchoMode (QLineEdit::Password);
    lineEditPassword->setGeometry(174,238,146,31);
    connect(lineEditPassword,SIGNAL(returnPressed()),this,SLOT(userLogin()));


    btnSet = new QPushButton("",this);
    btnSet->setGeometry(348,0,25,25);
    btnSet->setStyleSheet("background-image:url(img/btnSet.png);");
    btnSet->setFlat(true);
    connect(btnSet,SIGNAL(clicked()),this,SLOT(setDBServer()));

    btnMinimize = new QPushButton("",this);
    btnMinimize->setGeometry(374,0,25,25);
    btnMinimize->setStyleSheet("background-image:url(img/btnMinimize.png);");
    btnMinimize->setFlat(true);
    connect(btnMinimize,SIGNAL(clicked()),this,SLOT(showMinimized()));

    btnQuit = new QPushButton("",this);
    btnQuit ->setGeometry(400,0,25,25);
    btnQuit->setStyleSheet("background-image:url(img/btnQuit.png);");
    btnQuit->setFlat(true);
    connect(btnQuit,SIGNAL(clicked()),this,SLOT(close()));

    ErrorInfo = new QLabel("",this);
    ErrorInfo->setGeometry(330,199,146,31);
}


//用户登录槽函数
void login::userLogin()
{
    ErrorInfo->setText("");

    QString account = lineEditAccount->text();
    QString password = lineEditPassword->text();

    if(password.isEmpty())
    {
        ErrorInfo->setText("请输入密码！");
        return;
    }
    if(account.isEmpty())
    {
        ErrorInfo->setText("请输入账号！");
        return;
    }

    if(account == "1111" && password == "1111")
    {
        sigLoginIn();
        qDebug()<<"1111111111";
        mainWin = new MainWindow();
        this->hide();
        mainWin->show();
    }




}

void login::setDBServer()
{
    dbServer = new SetSQLServer();
    dbServer->exec();

}







void login::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void login::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void login::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap("img/Login1.png"));

}

