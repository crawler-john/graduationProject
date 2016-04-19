#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>      //数据库操作类
#include <QSqlQuery>         //执行和操作SQL语句类
#include <QDebug>
#include <QStringList>
#include <QList>
#include "userinfo.h"


class DBManager
{
public:
    enum eDbStatus{
        DB_SUCCESS          = 0,
        DB_FAILED           = 1,
        DB_SERVERUNUSUAL    = 2
    } ;

    DBManager(QString HostAddress);
    //设置服务器，在打开数据库前面使用
    void setHostAddress(QString HostAddress);

    //从数据库中获得账号密码
    eDbStatus DBSelectUserPassword(QString userID,QString *userPassword);
    //获取用户信息
    eDbStatus DBGetUserInfo(QString  userID,userInfo &userinfo);
    eDbStatus DBSetLoginFlag(QString userID,bool Loginflag);

private:
    QStringList m_sqlDriver;
    QSqlDatabase m_db;
    QString m_hostAddress;

    //打开数据库
    eDbStatus DBopen();
};

#endif // DBMANAGER_H
