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

QString userInfo::getPassword()
{
    return this->Password;
}

void userInfo::setPassword(QString Password)
{
    this->Password = Password;
}

QString userInfo::getName()
{
    return this->Name;
}

void userInfo::setName(QString Name)
{
    this->Name = Name;
}

QString userInfo::getPost()
{
    return this->Post;
}

void userInfo::setPost(QString Post)
{
    this->Post = Post;
}

QString userInfo::getSex()
{
    return this->Sex;
}

void userInfo::setSex(QString Sex)
{
    this->Sex = Sex;
}

QDate userInfo::getBirthday()
{
    return this->Birthday;
}

void userInfo::setBirthday(QDate Birthday)
{
    this->Birthday = Birthday;
}

QString userInfo::getBirthPlace()
{
    return this->BirthPlace;
}

void userInfo::setBirthPlace(QString BirthPlace)
{
    this->BirthPlace = BirthPlace;
}

QString userInfo::getGraduation()
{
    return this->Graduation;
}

void userInfo::setGraduation(QString Graduation)
{
    this->Graduation = Graduation;
}

QString userInfo::getEmail()
{
    return this->Email;
}

void userInfo::setEmail(QString Email)
{
    this->Email = Email;
}

QString userInfo::getPhone()
{
    return this->Phone;
}

void userInfo::setPhone(QString Phone)
{
    this->Phone = Phone;
}

QString userInfo::getAddress()
{
    return this->Address;
}

void userInfo::setAddress(QString Address)
{
    this->Address = Address;
}

QString userInfo::getRemark()
{
    return this->Remark;
}

void userInfo::setRemark(QString Remark)
{
    this->Remark = Remark;
}

int userInfo::getWorkYears()
{
    return this->WorkYears;
}

void userInfo::setWorkYears(int WorkYears)
{
    this->WorkYears = WorkYears;
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

bool userInfo::getPerm_setInfo()
{
    return this->perm_setInfo;
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

void userInfo::setPerm(QString Post)
{
    perm_myProject = true;
    perm_myTask = true;
    perm_setInfo = true;

    perm_WeeklyReports = true;
    perm_MonthlyReports = true;
    perm_OrganManage = false;
    perm_StaffManage = false;

    if(Post == "普通员工")
    {
        perm_RequireTaskManage = false;
        perm_PlanManage = false;
        perm_proInfoManage = false;
        perm_proStaffManage = false;
        perm_CostManage = false;
        perm_RoleManage = false;
        perm_LoginUser = false;
        perm_PermManage = false;
    }else if(Post == "项目经理")
    {
        perm_RequireTaskManage = true;
        perm_PlanManage = true;
        perm_proInfoManage =true;
        perm_proStaffManage = true;
        perm_CostManage = true;
        perm_RoleManage = false;
        perm_LoginUser = false;
        perm_PermManage = false;
    }else if(Post == "管理员")
    {
        perm_RequireTaskManage = true;
        perm_PlanManage = true;
        perm_proInfoManage =true;
        perm_proStaffManage = true;
        perm_CostManage = true;
        perm_RoleManage = true;
        perm_LoginUser = true;
        perm_PermManage = true;
    }else if(Post == "部门经理")
    {
        perm_RequireTaskManage = true;
        perm_PlanManage = true;
        perm_proInfoManage =true;
        perm_proStaffManage = true;
        perm_CostManage = true;
        perm_RoleManage = false;
        perm_LoginUser = false;
        perm_PermManage = false;
    }else if(Post == "软件项目管理员")
    {
        perm_RequireTaskManage = true;
        perm_PlanManage = true;
        perm_proInfoManage =true;
        perm_proStaffManage = true;
        perm_CostManage = true;
        perm_RoleManage = false;
        perm_LoginUser = false;
        perm_PermManage = false;
    }
}


void userInfo::setPerm_setInfo(bool perm_setInfo)
{
    this->perm_setInfo = perm_setInfo;
}
