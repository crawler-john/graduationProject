#ifndef USERINFO_H
#define USERINFO_H
#include <QString>

class userInfo
{
public:
    userInfo();

    QString getID();
    void setID(QString ID);
    QString getName();
    void setName(QString Name);
    bool getPerm_myProject();
    void setPerm_myProject(bool perm_myProject);
    bool getPerm_myTask();
    void setPerm_myTask(bool perm_myTask);
    bool getPerm_setInfo();
    void setPerm_setInfo(bool perm_setInfo);
    bool getPerm_proInfoManage();
    void setPerm_proInfoManage(bool perm_proInfoManage);
    bool getPerm_proStaffManage();
    void setPerm_proStaffManage(bool perm_proStaffManage);
    bool getPerm_CostManage();
    void setPerm_CostManage(bool perm_CostManage);
    bool getPerm_RequireTaskManage();
    void setPerm_RequireTaskManage(bool perm_RequireTaskManage);
    bool getPerm_PlanManage();
    void setPerm_PlanManage(bool perm_PlanManage);
    bool getPerm_WeeklyReports();
    void setPerm_WeeklyReports(bool perm_WeeklyReports);
    bool getPerm_MonthlyReports();
    void setPerm_MonthlyReports(bool perm_MonthlyReports);
    bool getPerm_OrganManage();
    void setPerm_OrganManage(bool perm_OrganManage);
    bool getPerm_StaffManage();
    void setPerm_StaffManage(bool perm_StaffManage);
    bool getPerm_RoleManage();
    void setPerm_RoleManage(bool perm_RoleManage);
    bool getPerm_LoginUser();
    void setPerm_LoginUser(bool perm_LoginUser);
    bool getPerm_PermManage();
    void setPerm_PermManage(bool perm_PermManage);

private:
    QString ID;
    QString Name;
    bool perm_myProject;
    bool perm_myTask;
    bool perm_setInfo;
    bool perm_proInfoManage;
    bool perm_proStaffManage;
    bool perm_CostManage;
    bool perm_RequireTaskManage;
    bool perm_PlanManage;
    bool perm_WeeklyReports;
    bool perm_MonthlyReports;
    bool perm_OrganManage;
    bool perm_StaffManage;
    bool perm_RoleManage;
    bool perm_LoginUser;
    bool perm_PermManage;

};

#endif // USERINFO_H
