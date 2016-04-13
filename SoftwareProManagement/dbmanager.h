#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>      //数据库操作类
#include <QSqlQuery>         //执行和操作SQL语句类
#include <QDebug>
#include <QStringList>
#include <QList>

class DBManager
{
public:
    DBManager(QString HostAddress);
    //设置服务器，在打开数据库前面使用
    void setHostAddress(QString HostAddress);

    //从数据库中获得账号密码
    QString DBSelectUserPassword(QString userID);



private:
    QStringList m_sqlDriver;
    QSqlDatabase m_db;
    QString m_hostAddress;

    //打开数据库
    bool DBopen();
};

#endif // DBMANAGER_H
