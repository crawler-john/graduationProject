#include "login.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include <QDomDocument>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

login::login(QWidget *parent) :
    QWidget(parent),DbManager(new DBManager(hostAddress))
{
    QPixmap pix;
    pix.load("img/Login.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
    resize(431,331);
    setMask(QBitmap(pix.mask()));
    setWindowFlags(Qt::FramelessWindowHint);
    readConfig();
    createLogin();
}

void login::createLogin()
{

    btnLogin = new QPushButton("",this);
    btnLogin->setGeometry(173,284,148,32);
    btnLogin->setStyleSheet("background-image:url(img/btnLogin.png);");
    btnLogin->setFlat(true);
    connect(btnLogin,SIGNAL(clicked()),this,SLOT(SlotUserLogin()));

    lineEditAccount = new QLineEdit(this);
    lineEditAccount->setGeometry(174,199,146,31);

    lineEditPassword = new QLineEdit(this);
    lineEditPassword->setEchoMode (QLineEdit::Password);
    lineEditPassword->setGeometry(174,238,146,31);
    connect(lineEditPassword,SIGNAL(returnPressed()),this,SLOT(SlotUserLogin()));

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

void login::readConfig()
{
    QDomDocument doc("mydocument");
    QFile file("configure/configure.xml");
    if (!file.open(QIODevice::ReadOnly))
        return;
    if (!doc.setContent(&file))
    {
        file.close();
        return;
    }
    file.close();

    // print out the element names of all elements that are direct children
    // of the outermost element.
    QDomElement docElem = doc.documentElement();

    QDomNode n = docElem.firstChild();
    while (!n.isNull())
    {
        QDomElement e = n.toElement(); // try to convert the node to an element.
        if (!e.isNull())
        {
            qDebug() << e.tagName() ; // the node really is an element.
            qDebug() << e.text() ;
            if(e.tagName() == "ServerIpAddress")  // the node really is an element.
            {
                hostAddress = e.text();
                DbManager->setHostAddress(hostAddress);
            }

        }
        n = n.nextSibling();
    }
}


//用户登录槽函数
void login::SlotUserLogin()
{
    ErrorInfo->setText("");

    QString inputAccount = lineEditAccount->text();
    QString inputPassword = lineEditPassword->text();

    if(inputAccount.isEmpty())
    {
        ErrorInfo->setText("请输入账号！");
        return;
    }
    if(inputPassword.isEmpty())
    {
        ErrorInfo->setText("请输入密码！");
        return;
    }

    QString password;
    qDebug() << hostAddress;
    DBManager::eDbStatus status = DbManager->DBSelectUserPassword(inputAccount,&password);
    if(status != DBManager::DB_SUCCESS)
    {
        qDebug() << status;
        QMessageBox::critical(this,"警告","当前服务器异常，请联系管理员！");
    }else
    {
        if(password == inputPassword)
        {
            mainWin = new MainWindow(DbManager,inputAccount);
            this->hide();
            mainWin->show();
        }else{
            ErrorInfo->setText("账号或密码有误！");
        }
    }


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
    painter.drawPixmap(0,0,QPixmap("img/Login.png"));


}

