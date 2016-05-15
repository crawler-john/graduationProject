#ifndef PROSTAFFINFO_H
#define PROSTAFFINFO_H
#include <QString>

class proStaffInfo
{
public:
    proStaffInfo();

    QString getUserID();
    void setUserID(QString UserID);
    QString getUserName();
    void setUserName(QString UserName);

    int getProID();
    void setProID(int ProID);

    QString getProName();
    void setProName(QString ProName);
    QString getPost();
    void setPost(QString Post);

    bool getStopUse();
    void setStopUse(bool StopUse);

    QString getDescribe();
    void setDescribe(QString Describe);
    int getWorkyears();
    void setWorkyears(int Workyears);
    bool getOutSourcing();
    void setOutSourcing(bool OutSourcing);


private:
    QString m_UserID;
    QString m_UserName;
    int m_ProID;
    QString m_ProName;
    QString m_Post;
    bool m_StopUse;
    QString m_Describe;
    int m_Workyears;
    bool m_OutSourcing;
};

#endif // PROSTAFFINFO_H
