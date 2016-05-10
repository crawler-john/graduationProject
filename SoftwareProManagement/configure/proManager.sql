#创建数据库
create database softwarepromanagement default charset utf8;

#创建用户表
CREATE TABLE `userinfo` (
  `Id` varchar(20) NOT NULL PRIMARY KEY,    #人员ID，作为账号
  `Password` varchar(20) NOT NULL,          #人员密码
  `Name` varchar(30) not null,          #人员姓名
  `Post` varchar(20) not null,			#职位
  `Sex` varchar(4) not null,            #性别
  `Birthday` DateTime,                  #生日
  `BirthPlace` varchar(60),             #故乡
  `Graduation`	varchar(60),			#毕业学校
  `Email` varchar(50),                  #电子邮箱
  `Phone` varchar(20),                  #电话号码
  `Address` varchar(50),                #地址
  `Remark` varchar(200),                #备注
  `WorkYears` int(11),                  #工龄
  `perm_myProject` enum('0','1'),       #下面的都是权限
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
#插入管理员以及其他人员信息
insert into userinfo(id,password,name,Post,Sex,perm_myProject,perm_myTask,perm_setinfo,perm_proInfoManage,perm_proStaffManage
,perm_CostManage,perm_RequireTaskManage,perm_PlanManage,perm_WeeklyReports,perm_MonthlyReports,perm_OrganManage,
perm_StaffManage,perm_RoleManage,perm_LoginUser,perm_PermManage,LoginFlag)
values("admin","123456","admin","管理员","男",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10001","123456","John","项目经理","男",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10002","123456","Rick","普通员工","男",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10003","123456","Echo","部门经理","男",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10004","123456","Jakkey","普通员工","男",'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0'),
("10005","123456","Tom","普通员工","男",'1','1','1','0','0','0','0','0','1','1','0','0','0','0','0','0'),
("10006","123456","Lucy","普通员工","女",'1','1','1','0','0','0','0','0','1','1','0','0','0','0','0','0');


#创建项目表
CREATE TABLE `proinfo`  (
    `Id` int(20) NOT NULL PRIMARY KEY,      #项目ID
    `proName` varchar(30) not null,         #项目名称
    `proClient` varchar(30) not null,       #项目客户名称
    `proDescribe` varchar(300) not null,    #项目描述
    `proMoney` int(20) not null,            #项目经费
    `proManager` varchar(20),               #项目经理
    `proState` varchar(20),                 #项目状态
    `timePlanStart` DateTime not null,      #项目计划开始时间
    `timePlanEnd` DateTime not null,        #项目计划结束时间
    `timeRealStart` DateTime,               #项目实际开始时间
    `timeRealEnd` DateTime,                 #项目实际结束时间
    `timeCreate`   DateTime not null,       #项目立项时间
    `priority` enum('0','1','2','3','4','5')#项目优先级
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#插入一些相关的数据
insert into proinfo values('1',"OA管理系统","昌盛纸页","本系统主要实现客户公司相关在线管理系统,主要利用技术的手段提高办公的效率，进而实现办公的自动化处理。",'10000','John','已完成','20130512111020','20130712111020','20130612111320','20130815111020','20130510111020','0'),
('2',"在线校园管理系统","嘉兴教育局","教务系统管理平台充分利用互联网络B/S管理系统模式，以网络为平台，为各个学校教务系统的管理提供一个平台，帮助学校管理教务系统，用一个帐号解决学校教务教学管理，并且学校可以自由选择学校需要的教务管理系统，灵活地定制符合学校自己实际情况的教务系统.协同办公管理系统是围绕高校管理中的人进行构建，以人为中心进行信息和资源的整合，是帮助人与人之间进行协同和交流的工具组成的集合，通过人员互动、沟通、协作、交流，以表单或文档流转的方式进行相关工作流程的执行，完成业务知识的积累和存储。",'50000','Pual','进行中','20140210091223','20140520120000','20140312100000','20140612100000','20140208090000','0');

#创建项目相关人员表
CREATE TABLE `prostaff` (
    `userID` varchar(20) NOT NULL , #项目人员
    `proID` int(20) not null,       #所在的项目
    `post`  varchar(20),            #在项目中的职位
    `stopUse` enum('0','1'),        #是否停止使用
    `describe` varchar(100),        #项目人员描述
    `workyear` int(11),             #项目人员工资时间
    `outsourcing` enum('0','1'),    #是否进行外购
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
    `ID` int(11) not null PRIMARY KEY,  #项目任务ID
    `proID` int(20) not null,           #项目任务所在项目ID
    `taskName` varchar(50) ,            #项目任务名称
    `taskExecutor` varchar(20) NOT NULL,    #项目任务执行中
    `taskPriority` enum('0','1','2','3','4','5'),   #项目任务优先级
    `taskDescribe` varchar(300),        #项目任务描述
    `timePlanStart` DateTime not null,  #项目任务计划开始时间
    `timePlanEnd` DateTime not null,    #项目任务计划结束时间
    `timeRealStart` DateTime,           #项目任务实际开始时间
    `timeRealEnd` DateTime,             #项目任务实际结束时间
    constraint fk_task_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id),
    constraint fk_task_executor FOREIGN KEY(taskExecutor) REFERENCES  userinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#创建项目进度信息表
CREATE TABLE `proprocess` (
    `ID` int(11) not null PRIMARY KEY,  #项目进度ID
    `proID` int(20) not null,       #项目进度所在的项目
    `processName` varchar(50),      #项目进度的名称
    `processDescribe` varchar(500), #项目进度描述
    `timePlanStart` DateTime not null,  #项目任务计划开始时间
    `timePlanEnd` DateTime not null,    #项目任务计划结束时间
    `timeRealStart` DateTime,       #项目任务实际开始时间
    `timeRealEnd` DateTime,         #项目任务实际结束时间
    constraint fk_process_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#进度任务关系表
CREATE TABLE `process_task` (
    `processID` int(11) not null,   #进度ID
    `taskID` int(11) not null,      #项目任务ID
    PRIMARY KEY(`processID`,`taskID`),
    constraint fk_process_task_processID FOREIGN KEY(processID) REFERENCES  proprocess(ID),
    constraint fk_process_task_taskID FOREIGN KEY(taskID) REFERENCES  protask(ID)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;
#任务需求关系表
CREATE TABLE `task_request` (
`taskID` int(11) not null,  #项目任务ID
`requestID` int(11) not null,   #项目需求ID
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
