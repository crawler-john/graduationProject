#include "dbmanager.h"

DBManager::DBManager(QString HostAddress):m_hostAddress(HostAddress)
{
    //get valid database Driver
    m_sqlDriver = QSqlDatabase::drivers();
    //add mysql to connect
    m_db = QSqlDatabase::addDatabase("QMYSQL");

    if(!m_db.isValid())
    {
        return;
    }
}

void DBManager::setHostAddress(QString HostAddress)
{
    m_hostAddress = HostAddress;
}

bool DBManager::DBopen()
{
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
        return true;
    }
    else
    {
        return false;
    }


}



QString DBManager::DBSelectUserPassword(QString userID)
{
    DBopen();
    QString password = "";
    QSqlQuery t_sql;
    QString sqlCMD = "select password from userinfo where id = " + userID + ";" ;

    bool flag = t_sql.exec(sqlCMD);
    if(flag)
    {
        qDebug() << "success";
        while(t_sql.next()){
            password =  t_sql.value(0).toString();
        }
    }else
    {
        password = "";
    }
    m_db.close();
    return password;

}
