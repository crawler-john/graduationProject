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
  `perm_setinfo` enum('0','1'),
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
insert into userinfo(id,password,name,perm_myProject,perm_myTask,perm_setinfo,perm_proInfoManage,perm_proStaffManage
,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,
perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,LoginFlag)
values("admin","123456","admin",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10001","123456","John",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10002","123456","Rick",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10003","123456","Echo",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10004","123456","Jakkey",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10005","123456","Tom",'1','1','1','0','0','0','0','0','1','1','0','0','0','0','0','0'),
("10006","123456","Lucy",'1','1','1','0','0','0','0','0','1','1','0','0','0','0','0','0');


#创建项目表
CREATE TABLE `proinfo`  (
    `Id` int(20) NOT NULL PRIMARY KEY,
    `proName` varchar(30) not null,
    `proClient` varchar(30) not null,
    `proDescribe` varchar(300) not null,
    `proMoney` int(20) not null,
    `proManager` varchar(20),
    `proState` varchar(20),
    `timePlanStart` DateTime not null,
    `timePlanEnd` DateTime not null,
    `timeRealStart` DateTime,
    `timeRealEnd` DateTime,
    `timeCreate`   DateTime not null,
    `priority` enum('0','1','2','3','4','5')
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#插入一些相关的数据
insert into proinfo values('1',"OA管理系统","昌盛纸页","本系统主要实现客户公司相关在线管理系统,主要利用技术的手段提高办公的效率，进而实现办公的自动化处理。",'10000','John','已完成','20130512111020','20130712111020','20130612111320','20130815111020','20130510111020','0'),
('2',"在线校园管理系统","嘉兴教育局","教务系统管理平台充分利用互联网络B/S管理系统模式，以网络为平台，为各个学校教务系统的管理提供一个平台，帮助学校管理教务系统，用一个帐号解决学校教务教学管理，并且学校可以自由选择学校需要的教务管理系统，灵活地定制符合学校自己实际情况的教务系统.协同办公管理系统是围绕高校管理中的人进行构建，以人为中心进行信息和资源的整合，是帮助人与人之间进行协同和交流的工具组成的集合，通过人员互动、沟通、协作、交流，以表单或文档流转的方式进行相关工作流程的执行，完成业务知识的积累和存储。",'50000','Pual','进行中','20140210091223','20140520120000','20140312100000','20140612100000','20140208090000','0');

#创建项目相关人员表
CREATE TABLE `prostaff` (
    `userID` varchar(20) NOT NULL ,
    `proID` int(20) not null,
    `post`  varchar(20),
    `stopUser` enum('0','1'),
    `describe` varchar(100),
    `workyear` int(11),
    `outsourcing` enum('0','1'),
    PRIMARY KEY(`userID`,`proID`),
    constraint fk_rdid FOREIGN KEY(userID) REFERENCES  userinfo(Id),
    constraint fk_staff_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;


#创建需求相关信息表
CREATE TABLE `prorequest` (
    `ID` int(11) not null PRIMARY KEY,  #需求的ID
    `requestName` varchar(50) not null, #需求的名称
    `proID` int(20) not null,       #项目的ID
    `requestDescribe` varchar(500), #项目需求描述
    `requestType` enum('0','1','2'), #0,业务需求，#1用户需求#2功能需求
    `requestState` varchar(20),     #项目需求当前的状态
    `requestPlan` varchar(20),      #项目需求当前进度
    constraint fk_request_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#创建项目任务信息表
CREATE TABLE `protask` (
    `ID` int(11) not null PRIMARY KEY,
    `proID` int(20) not null,
    `taskName` varchar(50) ,
    `taskExecutor` varchar(20) NOT NULL,
    `taskPriority` enum('0','1','2','3','4','5'),
    `taskDescribe` varchar(300),
    `timePlanStart` DateTime not null,
    `timePlanEnd` DateTime not null,
    `timeRealStart` DateTime,
    `timeRealEnd` DateTime,
    constraint fk_task_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id),
    constraint fk_task_executor FOREIGN KEY(taskExecutor) REFERENCES  userinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#创建项目进度信息表
CREATE TABLE `proprocess` (
    `ID` int(11) not null PRIMARY KEY,
    `proID` int(20) not null,
    `processName` varchar(50),
    `processDescribe` varchar(500),
    `timePlanStart` DateTime not null,
    `timePlanEnd` DateTime not null,
    `timeRealStart` DateTime,
    `timeRealEnd` DateTime,
    constraint fk_process_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#进度任务关系表
CREATE TABLE `process_task` (
    `processID` int(11) not null,
    `taskID` int(11) not null,
    PRIMARY KEY(`processID`,`taskID`),
    constraint fk_process_task_processID FOREIGN KEY(processID) REFERENCES  proprocess(ID),
    constraint fk_process_task_taskID FOREIGN KEY(taskID) REFERENCES  protask(ID)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;
#任务需求关系表
CREATE TABLE `task_request` (
`taskID` int(11) not null,
`requestID` int(11) not null,
PRIMARY KEY(`requestID`,`taskID`),
constraint fk_task_request_requestID FOREIGN KEY(requestID) REFERENCES  prorequest(ID),
constraint fk_task_request_taskID FOREIGN KEY(taskID) REFERENCES  protask(ID)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#周报表
CREATE TABLE `dialy` (

)ENGINE=InnoDB DEFAULT CHARSET=utf8;
#月报表
CREATE TABLE `monthly` (

)ENGINE=InnoDB DEFAULT CHARSET=utf8;
