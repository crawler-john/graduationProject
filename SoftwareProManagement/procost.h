#ifndef PROCOST_H
#define PROCOST_H
#include <QString>

class proCost
{
public:
    proCost();

    int getID();
    void setID(int ID);

    int getproID();
    void setproID(int proID);
    QString getProName();
    void setProName(QString ProName);
    QString getTitle();
    void setTitle(QString Title);
    int getMoney();
    void setMoney(int Money);
    QString getDescribe();
    void setDescribe(QString Describe);

private:
    int m_ID;
    int m_proID;
    QString m_ProName;
    QString m_Title;
    int m_Money;
    QString m_Describe;

};

#endif // PROCOST_H
