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
    QString sqlCMD = "select password from userinfo where id = " + userID + ";" ;

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
        return DB_FAILED;
    }



}
