#include "dbmanager.h"

DBManager::DBManager(QString HostAddress):m_dbFlag(false),m_hostAddress(HostAddress)
{
    //get valid database Driver
    m_sqlDriver = QSqlDatabase::drivers();
    //add mysql to connect
    m_db = QSqlDatabase::addDatabase("QMYSQL");

    if(!m_db.isValid())
    {
        m_dbFlag = false;
        return;
    }
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
        m_dbFlag = true;
        return true;
    }
    else
    {
        m_dbFlag = false;
        return false;
    }
}

bool DBManager::DBclose()
{
    if(m_dbFlag == true)
    {
        m_db.close();
        m_dbFlag = false;
        return true;
    }
    return false;
}
