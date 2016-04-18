#include "userinfo.h"

userInfo::userInfo()
{
}

QString userInfo::getID()
{
    return this->ID;
}

void userInfo::setID(QString ID)
{
    this->ID = ID;
}

QString userInfo::getName()
{
    return this->Name;
}

void userInfo::setName(QString Name)
{
    this->Name = Name;
}

bool userInfo::getPerm_myProject()
{
    return this->perm_myProject;
}

void userInfo::setPerm_myProject(bool perm_myProject)
{
    this->perm_myProject = perm_myProject;
}

bool userInfo::getPerm_myTask()
{
    return this->perm_myTask;
}

void userInfo::setPerm_myTask(bool perm_myTask)
{
    this->perm_myTask = perm_myTask;
}

bool userInfo::getPerm_proInfoManage()
{
    return this->perm_proInfoManage;
}

void userInfo::setPerm_proInfoManage(bool perm_proInfoManage)
{
    this->perm_proInfoManage = perm_proInfoManage;
}

bool userInfo::getPerm_proStaffManage()
{
    return this->perm_proStaffManage;
}

void userInfo::setPerm_proStaffManage(bool perm_proStaffManage)
{
    this->perm_proStaffManage = perm_proStaffManage;
}

bool userInfo::getPerm_CostManage()
{
    return this->perm_CostManage;
}

void userInfo::setPerm_CostManage(bool perm_CostManage)
{
    this->perm_CostManage = perm_CostManage;
}

bool userInfo::getPerm_RequireTaskManage()
{
    return perm_RequireTaskManage;
}

void userInfo::setPerm_RequireTaskManage(bool perm_RequireTaskManage)
{
    this->perm_RequireTaskManage = perm_RequireTaskManage;
}

bool userInfo::getPerm_PlanManage()
{
    return this->perm_PlanManage;
}

void userInfo::setPerm_PlanManage(bool perm_PlanManage)
{
    this->perm_PlanManage = perm_PlanManage;
}

bool userInfo::getPerm_WeeklyReports()
{
    return perm_WeeklyReports;
}

void userInfo::setPerm_WeeklyReports(bool perm_WeeklyReports)
{
    this->perm_WeeklyReports = perm_WeeklyReports;
}

bool userInfo::getPerm_MonthlyReports()
{
    return this->perm_MonthlyReports;
}

void userInfo::setPerm_MonthlyReports(bool perm_MonthlyReports)
{
    this->perm_MonthlyReports = perm_MonthlyReports;
}

bool userInfo::getPerm_OrganManage()
{
    return this->perm_OrganManage;
}

void userInfo::setPerm_OrganManage(bool perm_OrganManage)
{
    this->perm_OrganManage = perm_OrganManage;
}

bool userInfo::getPerm_StaffManage()
{
    return this->perm_StaffManage;
}

void userInfo::setPerm_StaffManage(bool perm_StaffManage)
{
    this->perm_StaffManage = perm_StaffManage;
}

bool userInfo::getPerm_RoleManage()
{
    return this->perm_RoleManage;
}

void userInfo::setPerm_RoleManage(bool perm_RoleManage)
{
    this->perm_RoleManage = perm_RoleManage;
}

bool userInfo::getPerm_LoginUser()
{
    return this->perm_LoginUser;
}

void userInfo::setPerm_LoginUser(bool perm_LoginUser)
{
    this->perm_LoginUser = perm_LoginUser;
}

bool userInfo::getPerm_PermManage()
{
    return this->perm_PermManage;
}

void userInfo::setPerm_PermManage(bool perm_PermManage)
{
    this->perm_PermManage = perm_PermManage;
}
