#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QPoint>
#include "mainwindow.h"
#include "setsqlserver.h"
#include "dbmanager.h"

class login : public QWidget
{
    Q_OBJECT
public:
    login(QWidget *parent = 0);
private:
    //账号输入框
    QLineEdit *lineEditAccount;
    //密码输入框
    QLineEdit *lineEditPassword;
    //登录按键
    QPushButton *btnLogin;
    //最小化按键
    QPushButton *btnMinimize;
    //退出按键
    QPushButton *btnQuit;
    //设置按键
    QPushButton *btnSet;
    //错误信息
    QLabel *ErrorInfo;

    MainWindow *mainWin;

    SetSQLServer *dbServer;



    //创建界面
    void createLogin();



private:
    QString hostAddress;
    QPoint dragPosition;
    DBManager *DbManager;
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);

signals:
    void sigLoginIn();
    
public slots:
    //用户登录
    void SlotUserLogin();
    //设置服务器
    void SlotSetDBServer();
    void SlotSetHostAddress(QString hostAddress);


    
};

#endif // LOGIN_H
