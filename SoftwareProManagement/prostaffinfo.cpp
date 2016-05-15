#include "prostaffinfo.h"

proStaffInfo::proStaffInfo()
{
}

QString proStaffInfo::getUserID()
{
    return m_UserID;
}

void proStaffInfo::setUserID(QString UserID)
{
    m_UserID = UserID;
}

QString proStaffInfo::getUserName()
{
    return m_UserName;
}

void proStaffInfo::setUserName(QString UserName)
{
    m_UserName = UserName;
}


int proStaffInfo::getProID()
{
    return m_ProID;
}

void proStaffInfo::setProID(int ProID)
{
    m_ProID = ProID;
}

QString proStaffInfo::getProName()
{
    return m_ProName;
}

void proStaffInfo::setProName(QString ProName)
{
    m_ProName = ProName;
}

QString proStaffInfo::getPost()
{
    return m_Post;
}

void proStaffInfo::setPost(QString Post)
{
    m_Post = Post;
}

bool proStaffInfo::getStopUse()
{
    return m_StopUse;
}

void proStaffInfo::setStopUse(bool StopUse)
{
    m_StopUse = StopUse;
}

QString proStaffInfo::getDescribe()
{
    return m_Describe;
}

void proStaffInfo::setDescribe(QString Describe)
{
    m_Describe = Describe;
}

int proStaffInfo::getWorkyears()
{
    return m_Workyears;
}

void proStaffInfo::setWorkyears(int Workyears)
{
    m_Workyears = Workyears;
}

bool proStaffInfo::getOutSourcing()
{
    return m_OutSourcing;
}

void proStaffInfo::setOutSourcing(bool OutSourcing)
{
    m_OutSourcing = OutSourcing;
}
