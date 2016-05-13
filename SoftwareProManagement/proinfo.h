#ifndef PROINFO_H
#define PROINFO_H
#include <QString>
#include <QDate>
class ProInfo
{
public:
    ProInfo();

    int getID();
    void setID(int ID);

    QString getName();
    void setName(QString Name);
    QString getClient();
    void setClient(QString Client);
    QString getDescribe();
    void setDescribe(QString Describe);

    int getMoney();
    void setMoney(int Money);

    QString getManager();
    void setManager(QString Manager);
    QString getState();
    void setState(QString State);
    QString getAddress();
    void setAddress(QString Address);

    QDate getPlanStart();
    void setPlanStart(QDate PlanStart);
    QDate getPlanEnd();
    void setPlanEnd(QDate PlanEnd);
    QDate getRealStart();
    void setRealStart(QDate RealStart);
    QDate getRealEnd();
    void setRealEnd(QDate RealEnd);
    QDate getCreate();
    void setCreate(QDate Create);

    int getPriority();
    void setPriority(int Priority);

private:
    int m_ID;
    QString m_Name;
    QString m_Client;
    QString m_Describe;
    int m_Money;
    QString m_Manager;
    QString m_State;
    QString m_Address;
    QDate m_PlanStart;
    QDate m_PlanEnd;
    QDate m_RealStart;
    QDate m_RealEnd;
    QDate m_Create;
    int m_Priority;
};

#endif // PROINFO_H
