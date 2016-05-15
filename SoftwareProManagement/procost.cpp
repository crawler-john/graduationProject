#include "procost.h"

proCost::proCost()
{
}

int proCost::getID()
{
    return m_ID;
}

void proCost::setID(int ID)
{
    m_ID= ID;
}

int proCost::getproID()
{
    return m_proID;
}

void proCost::setproID(int proID)
{
    m_proID = proID;
}

QString proCost::getProName()
{
    return m_ProName;
}

void proCost::setProName(QString ProName)
{
    m_ProName = ProName;
}

QString proCost::getTitle()
{
    return m_Title;
}

void proCost::setTitle(QString Title)
{
    m_Title = Title;
}

int proCost::getMoney()
{
    return  m_Money;
}

void proCost::setMoney(int Money)
{
    m_Money = Money;
}

QString proCost::getDescribe()
{
    return m_Describe;
}

void proCost::setDescribe(QString Describe)
{
    m_Describe = Describe;
}
