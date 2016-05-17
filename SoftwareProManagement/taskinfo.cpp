#include "taskinfo.h"

Taskinfo::Taskinfo()
{
}

int Taskinfo::getID()
{
    return m_ID;
}

void Taskinfo::setID(int ID)
{
    m_ID = ID;
}

int Taskinfo::getrequestTask()
{
    return  m_requestTask;
}

void Taskinfo::setrequestTask(int requestTask)
{
    m_requestTask = requestTask;
}

QString Taskinfo::getrequestName()
{
    return  m_requestName;
}

void Taskinfo::setrequestName(QString requestName)
{
    m_requestName = requestName;
}

int Taskinfo::getproID()
{
    return  m_proID;
}

void Taskinfo::setproID(int proID)
{
    m_proID = proID;
}

QString Taskinfo::getProName()
{
    return m_ProName;
}

void Taskinfo::setProName(QString ProName)
{
    m_ProName = ProName;
}

QDate Taskinfo::gettimeCreate()
{
    return m_timeCreate;
}

void Taskinfo::settimeCreate(QDate timeCreate)
{
    m_timeCreate = timeCreate;
}

QString Taskinfo::gettaskName()
{
    return  m_taskName;
}

void Taskinfo::settaskName(QString taskName)
{
    m_taskName = taskName;
}

QString Taskinfo::gettaskExecutorName()
{
    return  m_taskExecutorName;
}

void Taskinfo::settaskExecutorName(QString taskExecutor)
{
    m_taskExecutorName = taskExecutor;
}

int Taskinfo::gettaskPriority()
{
    return  m_taskPriority;
}

void Taskinfo::settaskPriority(int taskPriority)
{
    m_taskPriority = taskPriority;
}

QString Taskinfo::gettaskDescribe()
{
    return  m_taskDescribe;
}

void Taskinfo::settaskDescribe(QString taskDescribe)
{
    m_taskDescribe = taskDescribe;
}

QDate Taskinfo::gettimePlanStart()
{
    return m_timePlanStart;
}

void Taskinfo::settimePlanStart(QDate timePlanStart)
{
    m_timePlanStart = timePlanStart;
}

QDate Taskinfo::gettimePlanEnd()
{
    return  m_timePlanEnd;
}

void Taskinfo::settimePlanEnd(QDate timePlanEnd)
{
    m_timePlanEnd = timePlanEnd;
}

QString Taskinfo::gettaskExecutorID()
{
    return m_taskExecutorID;
}

void Taskinfo::settaskExecutorID(QString taskExecutorID)
{
    m_taskExecutorID = taskExecutorID;
}

