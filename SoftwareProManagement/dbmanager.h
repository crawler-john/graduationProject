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
#include "prostaffinfo.h"
#include "procost.h"


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
    //获取我的项目信息
    eDbStatus DBGetMyProInfoList(QString userID,QList<ProInfo*> &ProInfoList);

    //查询人员信息
    eDbStatus DBSelectUser(QString name,QString &ID,int &workyears);
    //查询项目信息
    eDbStatus DBSelectPro(QString name,int &proID);
    //查询周报信息
    eDbStatus DBSelectDailyList(QString name,QDate start,QDate end,QList<DailyInfo*> &dailyList);
    //查询月报信息
    eDbStatus DBSelectMonthlyList(QString name,QDate start,QDate end,QList<DailyInfo*> &dailyList);
    //查询项目信息
    eDbStatus DBSelectProInfoList(QDate start,QDate end,QList<ProInfo*> &ProInfoList);
    //查询我的项目信息
    eDbStatus DBSelectMyProInfoList(QString userID,QDate start,QDate end,QList<ProInfo*> &ProInfoList);
    //获取在线用户或全部用户 Flag:0 登入用户  Flag：1 全部用户
    eDbStatus DBGetLoginUserInfo(QList<userInfo *> &UserInfoList,int Flag);

    //查询用户信息 通过项目
    eDbStatus DBSelsctUserInfoByPro(QString ProName,QList<userInfo *> &UserInfoList);
    //获取所有的人员
    eDbStatus DBGetStaff(QStringList &list);

    //获取所有项目信息
    eDbStatus DBGetProject(QStringList &list);
    //获取项目经理
    eDbStatus DBGetManagers(QStringList &list);

    //为数据库添加周报或月报 flag:0 周报  flag：1月报
    eDbStatus DBInsertReport(DailyInfo dailyinfo, int flag);
    //添加项目
    eDbStatus DBInsertProject(ProInfo proinfo);
    //添加人员
    eDbStatus DBInsertUser(userInfo userinfo);
    eDbStatus DBGetProStaffInfo(QList<proStaffInfo *> &proStaffList,QString ProName);
    eDbStatus DBGetProCostInfo(QList<proCost *> &proCostList,QString ProName);
    //添加项目人员
    eDbStatus DBInsertProStaff(proStaffInfo &proStaffInfo);
    eDbStatus DBInsertProCost(proCost &procost);

    //更新实际开始结束时间 flag:0 开始时间  flag：1 结束时间
    eDbStatus DBUpdateRealTime(QDate date,int proID, int flag);

    //更新权限
    eDbStatus DBUpdatePerm(userInfo &userinfo);

private:
    QStringList m_sqlDriver;
    QSqlDatabase m_db;
    QString m_hostAddress;

    //打开数据库
    eDbStatus DBopen();
};

#endif // DBMANAGER_H
