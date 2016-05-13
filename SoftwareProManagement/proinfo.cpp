#include "proinfo.h"

ProInfo::ProInfo()
{
}

int ProInfo::getID()
{
    return m_ID;
}

void ProInfo::setID(int ID)
{
    m_ID = ID;
}


QString ProInfo::getName()
{
    return m_Name;
}

void ProInfo::setName(QString Name)
{
    m_Name = Name;
}

QString ProInfo::getClient()
{
    return m_Client;
}

void ProInfo::setClient(QString Client)
{
    m_Client = Client;
}

QString ProInfo::getDescribe()
{
    return m_Describe;
}

void ProInfo::setDescribe(QString Describe)
{
    m_Describe = Describe;
}

int ProInfo::getMoney()
{
    return m_Money;
}

void ProInfo::setMoney(int Money)
{
    m_Money = Money;
}

QString ProInfo::getManager()
{
    return m_Manager;
}

void ProInfo::setManager(QString Manager)
{
    m_Manager = Manager;
}

QString ProInfo::getState()
{
    return m_State;
}

void ProInfo::setState(QString State)
{
    m_State = State;
}

QString ProInfo::getAddress()
{
    return m_Address;
}

void ProInfo::setAddress(QString Address)
{
    m_Address = Address;
}

QDate ProInfo::getPlanStart()
{
    return m_PlanStart;
}

void ProInfo::setPlanStart(QDate PlanStart)
{
    m_PlanStart = PlanStart;
}

QDate ProInfo::getPlanEnd()
{
    return m_PlanEnd;
}

void ProInfo::setPlanEnd(QDate PlanEnd)
{
    m_PlanEnd = PlanEnd;
}

QDate ProInfo::getRealStart()
{
    return m_RealStart;
}

void ProInfo::setRealStart(QDate RealStart)
{
    m_RealStart = RealStart;
}

QDate ProInfo::getRealEnd()
{
    return m_RealEnd;
}

void ProInfo::setRealEnd(QDate RealEnd)
{
    m_RealEnd = RealEnd;
}

QDate ProInfo::getCreate()
{
    return m_Create;
}

void ProInfo::setCreate(QDate Create)
{
    m_Create = Create;
}

int ProInfo::getPriority()
{
    return m_Priority;
}

void ProInfo::setPriority(int Priority)
{
    m_Priority = Priority;
}
