#include "dbmanager.h"

DBManager::DBManager(QString HostAddress):m_hostAddress(HostAddress)
{
    //get valid database Driver
    m_sqlDriver = QSqlDatabase::drivers();
    //add mysql to connect
    m_db = QSqlDatabase::addDatabase("QMYSQL");
}

void DBManager::setHostAddress(QString HostAddress)
{
    m_hostAddress = HostAddress;
}

DBManager::eDbStatus DBManager::DBopen()
{
    if(!m_db.isValid())
    {
        return DB_SERVERUNUSUAL;
    }
    //set connect host
    m_db.setHostName(m_hostAddress);

    //user name
    m_db.setUserName("root");

    //user password
    m_db.setPassword("root");

    //Use database Settings
    m_db.setDatabaseName("softwarepromanagement");

    //connect and open database
    if(m_db.open())
    {
        return DB_SUCCESS;
    }
    else
    {
        return DB_FAILED;
    }
}


DBManager::eDbStatus  DBManager::DBSelectUserPassword(QString userID,QString *userPassword)
{
    DBManager::eDbStatus status = DBopen();
    if(status != DB_SUCCESS)
    {
        return status;
    }

    QSqlQuery t_sql;
    QString sqlCMD = "select password from userinfo where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            *userPassword =  t_sql.value(0).toString();
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }

}

DBManager::eDbStatus DBManager::DBGetUserInfo(QString  userID,userInfo &userinfo)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select id,Password,Name,Sex,Birthday,BirthPlace,Graduation,Email,Phone,Address,Remark,WorkYears,perm_myProject,perm_myTask,perm_setInfo,perm_proInfoManage,perm_proStaffManage,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,Post from userinfo where id=\"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            userinfo.setID(t_sql.value(0).toString());
            userinfo.setPassword(t_sql.value(1).toString());
            userinfo.setName(t_sql.value(2).toString());
            userinfo.setSex(t_sql.value(3).toString());
            userinfo.setBirthday(t_sql.value(4).toDate());
            userinfo.setBirthPlace(t_sql.value(5).toString());
            userinfo.setGraduation(t_sql.value(6).toString());
            userinfo.setEmail(t_sql.value(7).toString());
            userinfo.setPhone(t_sql.value(8).toString());
            userinfo.setAddress(t_sql.value(9).toString());
            userinfo.setRemark(t_sql.value(10).toString());
            userinfo.setWorkYears(t_sql.value(11).toInt());
            userinfo.setPerm_myProject(t_sql.value(12).toBool());
            userinfo.setPerm_myTask(t_sql.value(13).toBool());
            userinfo.setPerm_setInfo(t_sql.value(14).toBool());
            userinfo.setPerm_proInfoManage(t_sql.value(15).toBool());
            userinfo.setPerm_proStaffManage(t_sql.value(16).toBool());
            userinfo.setPerm_CostManage(t_sql.value(17).toBool());
            userinfo.setPerm_RequireTaskManage(t_sql.value(18).toBool());
            userinfo.setPerm_PlanManage(t_sql.value(19).toBool());
            userinfo.setPerm_WeeklyReports(t_sql.value(20).toBool());
            userinfo.setPerm_MonthlyReports(t_sql.value(21).toBool());
            userinfo.setPerm_OrganManage(t_sql.value(22).toBool());
            userinfo.setPerm_StaffManage(t_sql.value(23).toBool());
            userinfo.setPerm_RoleManage(t_sql.value(24).toBool());
            userinfo.setPerm_LoginUser(t_sql.value(25).toBool());
            userinfo.setPerm_PermManage(t_sql.value(26).toBool());
            userinfo.setPost(t_sql.value(27).toString());
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }

}

DBManager::eDbStatus DBManager::DBSetLoginFlag(QString userID, bool Loginflag)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";
    if(Loginflag)
    {
        sqlCMD = "update userinfo set Loginflag = '1' where id = \"" + userID + "\";" ;
    }else
    {
        sqlCMD = "update userinfo set Loginflag = '0' where id = \"" + userID + "\";" ;
    }


    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBAlterPassword(QString userID, QString newPassword)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    sqlCMD = "update userinfo set Password = '"+newPassword+"' where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBAlterEmail(QString userID, QString newEmail)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    sqlCMD = "update userinfo set Email = '"+newEmail+"' where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBAlterAddress(QString userID, QString newAddress)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    sqlCMD = "update userinfo set Address = '"+newAddress+"' where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBAlterPhone(QString userID, QString newPhone)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    sqlCMD = "update userinfo set Phone = '"+newPhone+"' where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetDailyList(QString userID, QList<DailyInfo*> &dailyList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select * from daily where UserID =\"" + userID + "\" order by Date DESC;" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            DailyInfo *dailyInfo = new DailyInfo;
            dailyInfo->setID(t_sql.value(0).toInt());
            dailyInfo->setUserID(t_sql.value(1).toString());
            dailyInfo->setName(t_sql.value(2).toString());
            dailyInfo->setDate(t_sql.value(3).toDate());
            dailyInfo->setContent(t_sql.value(4).toString());
            dailyInfo->setProblem(t_sql.value(5).toString());
            dailyInfo->setSolution(t_sql.value(6).toString());
            dailyInfo->setNextPlan(t_sql.value(7).toString());
            dailyList.push_back(dailyInfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetMonthlyList(QString userID, QList<DailyInfo *> &dailyList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select * from monthly where UserID =\"" + userID + "\" order by Date DESC;" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            DailyInfo *dailyInfo = new DailyInfo;
            dailyInfo->setID(t_sql.value(0).toInt());
            dailyInfo->setUserID(t_sql.value(1).toString());
            dailyInfo->setName(t_sql.value(2).toString());
            dailyInfo->setDate(t_sql.value(3).toDate());
            dailyInfo->setContent(t_sql.value(4).toString());
            dailyInfo->setProblem(t_sql.value(5).toString());
            dailyInfo->setSolution(t_sql.value(6).toString());
            dailyInfo->setNextPlan(t_sql.value(7).toString());
            dailyList.push_back(dailyInfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetProInfoList(QList<ProInfo *> &ProInfoList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "SELECT * from proinfo order by timeCreate desc;" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            ProInfo *proinfo = new ProInfo;
            proinfo->setID(t_sql.value(0).toInt());
            proinfo->setName(t_sql.value(1).toString());
            proinfo->setClient(t_sql.value(2).toString());
            proinfo->setDescribe(t_sql.value(3).toString());
            proinfo->setMoney(t_sql.value(4).toInt());
            proinfo->setManager(t_sql.value(5).toString());
            proinfo->setState(t_sql.value(6).toString());
            proinfo->setAddress(t_sql.value(7).toString());
            proinfo->setPlanStart(t_sql.value(8).toDate());
            proinfo->setPlanEnd(t_sql.value(9).toDate());
            proinfo->setRealStart(t_sql.value(10).toDate());
            proinfo->setRealEnd(t_sql.value(11).toDate());
            proinfo->setCreate(t_sql.value(12).toDate());
            proinfo->setPriority(t_sql.value(13).toInt());
            ProInfoList.push_back(proinfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetMyProInfoList(QString userID, QList<ProInfo *> &ProInfoList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "SELECT * from proinfo  where Id IN (SELECT proid from prostaff where userid = \""+userID+"\") order by timeCreate desc;" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            ProInfo *proinfo = new ProInfo;
            proinfo->setID(t_sql.value(0).toInt());
            proinfo->setName(t_sql.value(1).toString());
            proinfo->setClient(t_sql.value(2).toString());
            proinfo->setDescribe(t_sql.value(3).toString());
            proinfo->setMoney(t_sql.value(4).toInt());
            proinfo->setManager(t_sql.value(5).toString());
            proinfo->setState(t_sql.value(6).toString());
            proinfo->setAddress(t_sql.value(7).toString());
            proinfo->setPlanStart(t_sql.value(8).toDate());
            proinfo->setPlanEnd(t_sql.value(9).toDate());
            proinfo->setRealStart(t_sql.value(10).toDate());
            proinfo->setRealEnd(t_sql.value(11).toDate());
            proinfo->setCreate(t_sql.value(12).toDate());
            proinfo->setPriority(t_sql.value(13).toInt());
            ProInfoList.push_back(proinfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBSelectDailyList(QString name, QDate start, QDate end, QList<DailyInfo *> &dailyList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select * from daily where name =\"" + name + "\" and Date <=\"" +end.toString(Qt::ISODate)+  "\" and Date >= \""+start.toString(Qt::ISODate)+"\" order by Date DESC;" ;
    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            DailyInfo *dailyInfo = new DailyInfo;
            dailyInfo->setID(t_sql.value(0).toInt());
            dailyInfo->setUserID(t_sql.value(1).toString());
            dailyInfo->setName(t_sql.value(2).toString());
            dailyInfo->setDate(t_sql.value(3).toDate());
            dailyInfo->setContent(t_sql.value(4).toString());
            dailyInfo->setProblem(t_sql.value(5).toString());
            dailyInfo->setSolution(t_sql.value(6).toString());
            dailyInfo->setNextPlan(t_sql.value(7).toString());
            dailyList.push_back(dailyInfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBSelectMonthlyList(QString name, QDate start, QDate end, QList<DailyInfo *> &dailyList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select * from Monthly where name =\"" + name + "\" and Date <=\"" +end.toString(Qt::ISODate)+  "\" and Date >= \""+start.toString(Qt::ISODate)+"\" order by Date DESC;" ;
    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            DailyInfo *dailyInfo = new DailyInfo;
            dailyInfo->setID(t_sql.value(0).toInt());
            dailyInfo->setUserID(t_sql.value(1).toString());
            dailyInfo->setName(t_sql.value(2).toString());
            dailyInfo->setDate(t_sql.value(3).toDate());
            dailyInfo->setContent(t_sql.value(4).toString());
            dailyInfo->setProblem(t_sql.value(5).toString());
            dailyInfo->setSolution(t_sql.value(6).toString());
            dailyInfo->setNextPlan(t_sql.value(7).toString());
            dailyList.push_back(dailyInfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBSelectProInfoList(QDate start, QDate end, QList<ProInfo *> &ProInfoList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "select * from proinfo where timeCreate <=\"" +end.toString(Qt::ISODate)+  "\" and timeCreate >= \""+start.toString(Qt::ISODate)+"\" order by timeCreate DESC;" ;
    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            ProInfo *proinfo = new ProInfo;
            proinfo->setID(t_sql.value(0).toInt());
            proinfo->setName(t_sql.value(1).toString());
            proinfo->setClient(t_sql.value(2).toString());
            proinfo->setDescribe(t_sql.value(3).toString());
            proinfo->setMoney(t_sql.value(4).toInt());
            proinfo->setManager(t_sql.value(5).toString());
            proinfo->setState(t_sql.value(6).toString());
            proinfo->setAddress(t_sql.value(7).toString());
            proinfo->setPlanStart(t_sql.value(8).toDate());
            proinfo->setPlanEnd(t_sql.value(9).toDate());
            proinfo->setRealStart(t_sql.value(10).toDate());
            proinfo->setRealEnd(t_sql.value(11).toDate());
            proinfo->setCreate(t_sql.value(12).toDate());
            proinfo->setPriority(t_sql.value(13).toInt());
            ProInfoList.push_back(proinfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBSelectMyProInfoList(QString userID,QDate start, QDate end, QList<ProInfo *> &ProInfoList)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "SELECT * from proinfo  where Id IN (SELECT proid from prostaff where userid = \""+userID+"\") and timeCreate <=\"" +end.toString(Qt::ISODate)+  "\" and timeCreate >= \""+start.toString(Qt::ISODate)+"\"  order by timeCreate desc;";
    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            ProInfo *proinfo = new ProInfo;
            proinfo->setID(t_sql.value(0).toInt());
            proinfo->setName(t_sql.value(1).toString());
            proinfo->setClient(t_sql.value(2).toString());
            proinfo->setDescribe(t_sql.value(3).toString());
            proinfo->setMoney(t_sql.value(4).toInt());
            proinfo->setManager(t_sql.value(5).toString());
            proinfo->setState(t_sql.value(6).toString());
            proinfo->setAddress(t_sql.value(7).toString());
            proinfo->setPlanStart(t_sql.value(8).toDate());
            proinfo->setPlanEnd(t_sql.value(9).toDate());
            proinfo->setRealStart(t_sql.value(10).toDate());
            proinfo->setRealEnd(t_sql.value(11).toDate());
            proinfo->setCreate(t_sql.value(12).toDate());
            proinfo->setPriority(t_sql.value(13).toInt());
            ProInfoList.push_back(proinfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetLoginUserInfo(QList<userInfo *> &UserInfoList,int Flag)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";
    if(Flag == 0)
    {
        sqlCMD = "select id,Password,Name,Sex,Birthday,BirthPlace,Graduation,Email,Phone,Address,Remark,WorkYears,perm_myProject,perm_myTask,perm_setInfo,perm_proInfoManage,perm_proStaffManage,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,Post from userinfo where LoginFlag = '1';" ;
    }else if(Flag == 1)
    {
        sqlCMD = "select id,Password,Name,Sex,Birthday,BirthPlace,Graduation,Email,Phone,Address,Remark,WorkYears,perm_myProject,perm_myTask,perm_setInfo,perm_proInfoManage,perm_proStaffManage,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,Post from userinfo;" ;
    }

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            userInfo *userinfo = new userInfo;
            userinfo->setID(t_sql.value(0).toString());
            userinfo->setPassword(t_sql.value(1).toString());
            userinfo->setName(t_sql.value(2).toString());
            userinfo->setSex(t_sql.value(3).toString());
            userinfo->setBirthday(t_sql.value(4).toDate());
            userinfo->setBirthPlace(t_sql.value(5).toString());
            userinfo->setGraduation(t_sql.value(6).toString());
            userinfo->setEmail(t_sql.value(7).toString());
            userinfo->setPhone(t_sql.value(8).toString());
            userinfo->setAddress(t_sql.value(9).toString());
            userinfo->setRemark(t_sql.value(10).toString());
            userinfo->setWorkYears(t_sql.value(11).toInt());
            userinfo->setPerm_myProject(t_sql.value(12).toBool());
            userinfo->setPerm_myTask(t_sql.value(13).toBool());
            userinfo->setPerm_setInfo(t_sql.value(14).toBool());
            userinfo->setPerm_proInfoManage(t_sql.value(15).toBool());
            userinfo->setPerm_proStaffManage(t_sql.value(16).toBool());
            userinfo->setPerm_CostManage(t_sql.value(17).toBool());
            userinfo->setPerm_RequireTaskManage(t_sql.value(18).toBool());
            userinfo->setPerm_PlanManage(t_sql.value(19).toBool());
            userinfo->setPerm_WeeklyReports(t_sql.value(20).toBool());
            userinfo->setPerm_MonthlyReports(t_sql.value(21).toBool());
            userinfo->setPerm_OrganManage(t_sql.value(22).toBool());
            userinfo->setPerm_StaffManage(t_sql.value(23).toBool());
            userinfo->setPerm_RoleManage(t_sql.value(24).toBool());
            userinfo->setPerm_LoginUser(t_sql.value(25).toBool());
            userinfo->setPerm_PermManage(t_sql.value(26).toBool());
            userinfo->setPost(t_sql.value(27).toString());
            UserInfoList.push_front(userinfo);
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }

}

DBManager::eDbStatus DBManager::DBGetStaff(QStringList &list)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "SELECT name from userinfo;" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            list << t_sql.value(0).toString();

        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBGetManagers(QStringList &list)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "SELECT name from userinfo where post = \"项目经理\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            list << t_sql.value(0).toString();

        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBInsertReport(DailyInfo dailyinfo, int flag)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    if(flag == 0)
    {
        sqlCMD = "insert into daily(UserID,Name,Date,Content,Problem,Solution,Nextplan) VALUES(\""+dailyinfo.getUserID()+"\",\"" + dailyinfo.getName() +"\",\""+dailyinfo.getDate().toString(Qt::ISODate) +"\",\""+dailyinfo.getContent()+"\",\""+dailyinfo.getProblem()+"\",\""+dailyinfo.getSolution()+"\",\""+dailyinfo.getNextPlan()+"\")";
    }else if(flag == 1)
    {
        sqlCMD = "insert into monthly(UserID,Name,Date,Content,Problem,Solution,Nextplan) VALUES(\""+dailyinfo.getUserID()+"\",\"" + dailyinfo.getName() +"\",\""+dailyinfo.getDate().toString(Qt::ISODate) +"\",\""+dailyinfo.getContent()+"\",\""+dailyinfo.getProblem()+"\",\""+dailyinfo.getSolution()+"\",\""+dailyinfo.getNextPlan()+"\")";
    }

    flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBInsertProject(ProInfo proinfo)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "insert into proinfo(proName,proClient,proMoney,proManager,proState,proAddress,timePlanStart,timePlanEnd,timeCreate,priority,proDescribe) values(\""+proinfo.getName()+"\",\""+proinfo.getClient()+"\","+QString::number(proinfo.getMoney())+",\""+proinfo.getManager()+"\",\""+proinfo.getState()+"\",\""+proinfo.getAddress()+"\",\""+proinfo.getPlanStart().toString(Qt::ISODate)+"\",\""+proinfo.getPlanEnd().toString(Qt::ISODate)+"\",\""+proinfo.getCreate().toString(Qt::ISODate)+"\",'"+QString::number(proinfo.getPriority())+"',\""+proinfo.getDescribe().replace("\"","\\")+"\")";
    qDebug() << sqlCMD;
    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}

DBManager::eDbStatus DBManager::DBUpdateRealTime(QDate date, int proID, int flag)
{
    DBopen();
    QSqlQuery t_sql;
    QString sqlCMD = "";

    if(flag == 0)
    {
        sqlCMD = "update proinfo set timeRealStart = \""+date.toString(Qt::ISODate)+"\" where id = "+QString::number(proID)+";";
    }else if(flag == 1)
    {
        sqlCMD = "update proinfo set timeRealEnd = \""+date.toString(Qt::ISODate)+"\" where id = "+QString::number(proID)+";";
    }
    qDebug() << sqlCMD;
    flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        m_db.close();
        return DB_FAILED;
    }
}
