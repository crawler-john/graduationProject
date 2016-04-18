#创建数据库
create database softwarepromanagement default charset utf8;

#创建用户表
CREATE TABLE `userinfo` (
  `Id` varchar(20) NOT NULL PRIMARY KEY,
  `Password` varchar(20) NOT NULL,
  `Name` varchar(30) not null,
  `Email` varchar(50),
  `Phone` varchar(20),
  `Address` varchar(50),
  `Remark` varchar(200),
  `perm_myProject` enum('0','1'),
  `perm_myTask` enum('0','1'),
  `perm_proInfoManage` enum('0','1'),
  `perm_proStaffManage` enum('0','1'),
  `perm_CostManage` enum('0','1'),
  `perm_RequireTaskManage` enum('0','1'),
  `perm_PlanManage` enum('0','1'),
  `perm_WeeklyReports` enum('0','1'),
  `perm_MonthlyReports` enum('0','1'),
  `perm_OrganManage` enum('0','1'),
  `perm_StaffManage` enum('0','1'),
  `perm_RoleManage`enum('0','1'),
  `perm_LoginUser` enum('0','1'),
  `perm_PermManage` enum('0','1'),
  `LoginFlag` enum('0','1')
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
#插入管理员信息
insert into userinfo(id,password,name,perm_myProject,perm_myTask,perm_proInfoManage,perm_proStaffManage
,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,
perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,LoginFlag) values("admin","123456","admin",
'1','1','1','1','1','1','1','1','1','1','1','1','1','1','0');
