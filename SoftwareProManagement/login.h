#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QPoint>
#include "mainwindow.h"
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
    //错误信息
    QLabel *ErrorInfo;

    MainWindow *mainWin;

    //创建界面
    void createLogin();



private:
    QString hostAddress;
    QPoint dragPosition;
    DBManager *DbManager;
    void readConfig();

protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);


    
public slots:
    //用户登录
    void SlotUserLogin();

};

#endif // LOGIN_H
