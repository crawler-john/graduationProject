#include "processinfo.h"

ProcessInfo::ProcessInfo()
{
}

int ProcessInfo::getID()
{
    return m_ID;
}

void ProcessInfo::setID(int ID)
{
    m_ID = ID;
}

int ProcessInfo::getproID()
{
    return m_proID;
}

void ProcessInfo::setproID(int proID)
{
    m_proID = proID;
}

QString ProcessInfo::getproName()
{
    return  m_proName;
}

void ProcessInfo::setproName(QString proName)
{
    m_proName = proName;
}

QDate ProcessInfo::gettimeCreate()
{
    return m_timeCreate;
}

void ProcessInfo::settimeCreate(QDate timeCreate)
{
    m_timeCreate = timeCreate;
}

int ProcessInfo::gettaskID()
{
    return  m_taskID;
}

void ProcessInfo::settaskID(int taskID)
{
    m_taskID = taskID;
}

QString ProcessInfo::gettaskName()
{
    return m_taskName;
}

void ProcessInfo::settaskName(QString taskName)
{
    m_taskName = taskName;
}

QString ProcessInfo::getprocessName()
{
    return m_processName;
}

void ProcessInfo::setprocessName(QString processName)
{
    m_processName = processName;
}

QString ProcessInfo::getprocessDescribe()
{
    return m_processDescribe;
}

void ProcessInfo::setprocessDescribe(QString processDescribe)
{
    m_processDescribe = processDescribe;
}
