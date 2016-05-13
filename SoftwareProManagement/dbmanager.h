#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>      //数据库操作类
#include <QSqlQuery>         //执行和操作SQL语句类
#include <QDebug>
#include <QStringList>
#include <QList>
#include "userinfo.h"
#include "dailyinfo.h"
#include "proinfo.h"


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
    //更改登录标志
    eDbStatus DBSetLoginFlag(QString userID,bool Loginflag);
    //修改密码
    eDbStatus DBAlterPassword(QString userID,QString newPassword);
    //修改邮箱
    eDbStatus DBAlterEmail(QString userID,QString newEmail);
    //修改地址
    eDbStatus DBAlterAddress(QString userID,QString newAddress);
    //修改电话
    eDbStatus DBAlterPhone(QString userID,QString newPhone);

    //获取周报信息
    eDbStatus DBGetDailyList(QString userID,QList<DailyInfo*> &dailyList);
    //获取月报信息
    eDbStatus DBGetMonthlyList(QString userID,QList<DailyInfo*> &dailyList);
    //获取项目信息
    eDbStatus DBGetProInfoList(QList<ProInfo*> &ProInfoList);


    //查询周报信息
    eDbStatus DBSelectDailyList(QString name,QDate start,QDate end,QList<DailyInfo*> &dailyList);
    //查询月报信息
    eDbStatus DBSelectMonthlyList(QString name,QDate start,QDate end,QList<DailyInfo*> &dailyList);
    //获取所有的人员
    eDbStatus DBGetStaff(QStringList &list);

    //为数据库添加周报或月报 flag:0 周报  flag：1月报
    eDbStatus DBInsertReport(DailyInfo dailyinfo, int flag);

private:
    QStringList m_sqlDriver;
    QSqlDatabase m_db;
    QString m_hostAddress;

    //打开数据库
    eDbStatus DBopen();
};

#endif // DBMANAGER_H
