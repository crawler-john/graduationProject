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
    QString sqlCMD = "select id,Name,perm_myProject,perm_myTask,perm_proInfoManage,perm_proStaffManage,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage from userinfo where id = \"" + userID + "\";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        while(t_sql.next()){
            userinfo.setID(t_sql.value(0).toString());
            userinfo.setName(t_sql.value(1).toString());
            userinfo.setPerm_myProject(t_sql.value(2).toBool());
            userinfo.setPerm_myTask(t_sql.value(3).toBool());
            userinfo.setPerm_proInfoManage(t_sql.value(4).toBool());
            userinfo.setPerm_proStaffManage(t_sql.value(5).toBool());
            userinfo.setPerm_CostManage(t_sql.value(6).toBool());
            userinfo.setPerm_RequireTaskManage(t_sql.value(7).toBool());
            userinfo.setPerm_PlanManage(t_sql.value(8).toBool());
            userinfo.setPerm_WeeklyReports(t_sql.value(9).toBool());
            userinfo.setPerm_MonthlyReports(t_sql.value(10).toBool());
            userinfo.setPerm_OrganManage(t_sql.value(11).toBool());
            userinfo.setPerm_StaffManage(t_sql.value(12).toBool());
            userinfo.setPerm_RoleManage(t_sql.value(13).toBool());
            userinfo.setPerm_LoginUser(t_sql.value(14).toBool());
            userinfo.setPerm_PermManage(t_sql.value(15).toBool());
        }
        m_db.close();
        return DB_SUCCESS;
    }else
    {
        return DB_FAILED;
    }

}
