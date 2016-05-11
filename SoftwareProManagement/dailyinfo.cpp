#include "dailyinfo.h"

DailyInfo::DailyInfo()
{

}

int DailyInfo::getID()
{
   return m_ID;
}


void DailyInfo::setID(int ID)
{
    this->m_ID = ID;
}

QString DailyInfo::getUserID()
{
    return m_UserID;
}

void DailyInfo::setUserID(QString UserID)
{
    this->m_UserID = UserID;
}

QString DailyInfo::getName()
{
    return m_Name;
}

void DailyInfo::setName(QString Name)
{
    this->m_Name = Name;
}

QDate DailyInfo::getDate()
{
    return m_Date;
}

void DailyInfo::setDate(QDate Date)
{
    this->m_Date = Date;
}

QString DailyInfo::getContent()
{
    return m_Content;
}

void DailyInfo::setContent(QString Content)
{
    this->m_Content = Content;
}

QString DailyInfo::getProblem()
{
    return m_Problem;
}

void DailyInfo::setProblem(QString Problem)
{
    this->m_Problem = Problem;
}

QString DailyInfo::getSolution()
{
    return m_Solution;
}

void DailyInfo::setSolution(QString Solution)
{
    this->m_Solution = Solution;
}

QString DailyInfo::getNextPlan()
{
    return m_NextPlan;
}

void DailyInfo::setNextPlan(QString NextPlan)
{
    this->m_NextPlan = NextPlan;
}
