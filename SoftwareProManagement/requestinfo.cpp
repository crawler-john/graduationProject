#include "requestinfo.h"

requestInfo::requestInfo()
{
}

int requestInfo::getID()
{
    return  m_ID;
}

void requestInfo::setID(int ID)
{
    m_ID = ID;
}

QString requestInfo::getRequestName()
{
    return  m_RequestName;
}

void requestInfo::setRequestName(QString RequestName)
{
    m_RequestName = RequestName;
}

QDate requestInfo::gettimeCreate()
{
    return  m_timeCreate;
}

void requestInfo::settimeCreate(QDate timeCreate)
{
    m_timeCreate = timeCreate;
}

int requestInfo::getProID()
{
    return  m_ProID;
}

void requestInfo::setProID(int ProID)
{
    m_ProID = ProID;
}

QString requestInfo::getProName()
{
    return m_ProName;
}

void requestInfo::setProName(QString ProName)
{
    m_ProName = ProName;
}

QString requestInfo::getRequestDescribe()
{
    return m_RequestDescribe;
}

void requestInfo::setRequestDescribe(QString RequestDescribe)
{
    m_RequestDescribe = RequestDescribe;
}

int requestInfo::getRequestType()
{
    return  m_RequestType;
}

void requestInfo::setRequestType(int RequestType)
{
    m_RequestType = RequestType;
}

QString requestInfo::getRequestState()
{
    return  m_RequestState;
}

void requestInfo::setRequestState(QString RequestState)
{
    m_RequestState = RequestState;
}
