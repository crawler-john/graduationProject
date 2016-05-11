#ifndef DAILYINFO_H
#define DAILYINFO_H
#include <QString>
#include <QDate>
class DailyInfo
{
public:
    DailyInfo();


    int getID();
    void setID(int ID);
    QString getUserID();
    void setUserID(QString UserID);
    QString getName();
    void setName(QString Name);
    QDate getDate();
    void setDate(QDate Date);
    QString getContent();
    void setContent(QString Content);
    QString getProblem();
    void setProblem(QString Problem);
    QString getSolution();
    void setSolution(QString Solution);
    QString getNextPlan();
    void setNextPlan(QString NextPlan);

private:
    int m_ID;
    QString m_UserID;
    QString m_Name;
    QDate m_Date;
    QString m_Content;
    QString m_Problem;
    QString m_Solution;
    QString m_NextPlan;
};

#endif // DAILYINFO_H
