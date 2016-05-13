#创建数据库
create database softwarepromanagement default charset utf8;

#创建用户表
CREATE TABLE `userinfo` (
  `Id` varchar(20) NOT NULL PRIMARY KEY,    #人员ID，作为账号
  `Password` varchar(20) NOT NULL,          #人员密码
  `Name` varchar(30) not null,          #人员姓名
  `Post` varchar(20) not null,			#职位
  `Sex` varchar(4) not null,            #性别
  `Birthday` Date,                  #生日
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
-- ----------------------------
-- Records of userinfo
-- ----------------------------
INSERT INTO `userinfo` VALUES ('10001', '123456', 'John', '项目经理', '男', '1993-02-26', '浙江省嘉兴市', '湖南工学院', '895961454@qq.com', '15757364226', '川杨新苑25栋603室', '无', '3', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');
INSERT INTO `userinfo` VALUES ('10002', '123456', 'Rick', '普通员工', '男', '1990-02-06', '浙江省嘉兴市', '湖南工学院', '846553122@qq.com', '18874576131', '湘都公寓39栋505室', '无', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');
INSERT INTO `userinfo` VALUES ('10003', '123456', 'Echo', '部门经理', '男', '1989-05-12', '浙江省湖州市', '上海理工学院', '47168599@qq.com', '15757422216', '罗马都市39栋202室', '无', '6', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');
INSERT INTO `userinfo` VALUES ('10004', '123456', 'Jakkey', '普通员工', '男', '1988-04-17', '浙江省绍兴市', '杭州医药学院', '5491556121@qq.com', '15325336567', '石岩小区25栋304室', '无', '2', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');
INSERT INTO `userinfo` VALUES ('10005', '123456', 'Tom', '软件项目管理员', '男', '1994-11-21', '浙江省温州市', '北京大学', '8874325489@qq.com', '15325488976', '玫瑰花园25栋', '无', '3', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');
INSERT INTO `userinfo` VALUES ('10006', '123456', 'Lucy', '普通员工', '女', '1996-11-25', '浙江省杭州市', '嘉兴大学', '574576950@qq.com', '18826135746', '孙桥花园1栋101室', '无', '1', '1', '1', '1', '0', '0', '0', '0', '0', '1', '1', '0', '0', '0', '0', '0', '0');
INSERT INTO `userinfo` VALUES ('admin', '123456', 'admin', '管理员', '男', '1993-02-26', '上海市', '杭州电子科技大学', '491980531@qq.com', '18625746664', '孙桥花园25栋205室', '无', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '0');

#创建项目表
CREATE TABLE `proinfo`  (
    `Id` int(20) NOT NULL PRIMARY KEY AUTO_INCREMENT,      #项目ID
    `proName` varchar(30) not null,         #项目名称
    `proClient` varchar(30) not null,       #项目客户名称
    `proDescribe` varchar(300) not null,    #项目描述
    `proMoney` int(20) not null,            #项目经费
    `proManager` varchar(20),               #项目经理
    `proState` varchar(20),                 #项目状态
    `proAddress` varchar(50),               #项目存放地址
    `timePlanStart` date not null,      #项目计划开始时间
    `timePlanEnd` date not null,        #项目计划结束时间
    `timeRealStart` date,               #项目实际开始时间
    `timeRealEnd` date,                 #项目实际结束时间
    `timeCreate`   date not null,       #项目立项时间
    `priority` enum('0','1','2','3','4','5')#项目优先级
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#插入一些相关的数据
insert into proinfo values('1',"OA管理系统","昌盛纸页","本系统主要实现客户公司相关在线管理系统,主要利用技术的手段提高办公的效率，进而实现办公的自动化处理。",'10000','John','已完成','git@github.com:company/OAManager.git','20130512','20130712','20130612','20130815','20130510','0'),
('2',"在线校园管理系统","嘉兴教育局","教务系统管理平台充分利用互联网络B/S管理系统模式，以网络为平台，为各个学校教务系统的管理提供一个平台，帮助学校管理教务系统，用一个帐号解决学校教务教学管理，并且学校可以自由选择学校需要的教务管理系统，灵活地定制符合学校自己实际情况的教务系统.协同办公管理系统是围绕高校管理中的人进行构建，以人为中心进行信息和资源的整合，是帮助人与人之间进行协同和交流的工具组成的集合，通过人员互动、沟通、协作、交流，以表单或文档流转的方式进行相关工作流程的执行，完成业务知识的积累和存储。",'50000','Pual','进行中','git@github.com:company/SchoolManager.git','20140210','20140520','20140312','20140612','20140208','0'),
('3',"Twitter世界大学数据爬取","嘉兴诺知","本项目主要实现对Twitter上，各个大学的数据进行爬取，然后获得其粉丝数据以及其粉丝的粉丝，从而比较每个大学的成材率，以及一些其他的数据，然后对国内外各个大学进行排名",'10000','John','已完成','git@github.com:company/SchoolRank.git','20151012','20160212','20130312','2011115','20160410','3');

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
    `timeCreate`   date not null,
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
    `timeCreate`   date not null,
    `taskName` varchar(50) ,            #项目任务名称
    `taskExecutor` varchar(20) NOT NULL,    #项目任务执行中
    `taskPriority` enum('0','1','2','3','4','5'),   #项目任务优先级
    `taskDescribe` varchar(300),        #项目任务描述
    `timePlanStart` date not null,  #项目任务计划开始时间
    `timePlanEnd` date not null,    #项目任务计划结束时间
    `timeRealStart` date,           #项目任务实际开始时间
    `timeRealEnd` date,             #项目任务实际结束时间
    constraint fk_task_proid FOREIGN KEY(proID) REFERENCES  proinfo(Id),
    constraint fk_task_executor FOREIGN KEY(taskExecutor) REFERENCES  userinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#创建项目进度信息表
CREATE TABLE `proprocess` (
    `ID` int(11) not null PRIMARY KEY,  #项目进度ID
    `proID` int(20) not null,       #项目进度所在的项目
    `timeCreate`   date not null,
    `processName` varchar(50),      #项目进度的名称
    `processDescribe` varchar(500), #项目进度描述
    `timePlanStart` date not null,  #项目任务计划开始时间
    `timePlanEnd` date not null,    #项目任务计划结束时间
    `timeRealStart` date,       #项目任务实际开始时间
    `timeRealEnd` date,         #项目任务实际结束时间
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
CREATE TABLE `daily` (
    `ID` int(20) not null PRIMARY KEY AUTO_INCREMENT,
    `UserID` varchar(20) NOT NULL,
    `Name` varchar(30) not null,
    `Date` date not null,
    `Content` varchar(1000) not null,
    `Problem` varchar(500) not null,
    `Solution` varchar(500) not null,
    `NextPlan` varchar(500) not null,
    constraint fk_daily_userID FOREIGN KEY(UserID) REFERENCES  userinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#插入周报相关数据
-- ----------------------------
-- Records of daily
-- ----------------------------
INSERT INTO `daily` VALUES ('1', '10005', 'Tom', '2015-10-30', '1.办理入职相关手续\r\n2.Java相关基础知识的学习，本周基本把Java基础部分都看了一遍，并且自己也敲了相应代码熟悉。\r\n3.完成陆哥交给我的任务，根据数据库中大学英文名字翻墙查找其官方Twitter并导入数据库中。\r\n在周五，执行相应的爬虫在Twitter爬取各个大学相应的人数，并且自行研究相关的代码。', '刚刚接触Java，很多相关的Java API并不是很熟悉。\r\n因为用的是同一个数据库主机以及翻墙，爬虫程序相对执行速度较慢。', '相对于API不熟悉，需要在今后的编程生涯中继续好好熟悉。', '及时完成上级以及陆哥交给我的任务。');
INSERT INTO `daily` VALUES ('2', '10005', 'Tom', '2015-11-06', '1.把twitter相关的数据库从220搬移到自己的工作电脑，并继续运行爬虫程序，爬取相关的数据，在转移数据库后爬虫程序爬取速度加快。\r\n2.使用Java进行编程练习，进一步熟悉Java语言，并且了解一些相关的库。\r\n3.学习正则表达式相关基础知识。\r\n4.完成陆哥给的爬取维基百科上大学创建年份的程序，并将数据爬取\r\n5.完成了相关数据从csv格式转换到json。\r\n学习相关爬虫程序的设计。', '在实现抓取wikipedia中大学的创建年份的时候，很小一部分大学并没有抓取到，原因是正则表达式并没有完全覆盖所有。', '手动搜索这些大学，并将其加到数据库中。', '及时完成上级以及陆哥交给我的任务。');
INSERT INTO `daily` VALUES ('3', '10005', 'Tom', '2015-11-13', '1.继续Twitter中大学数据的采集，预计下周可完成该项任务。\r\n2.学习JavaScript相关基础，了解百度echarts库相关的知识，并能做一些简单的图表，为后续陆哥给我图表任务做准备。\r\n3.了解OpenLayers map库的一些基础知识，为后续工作做准备。\r\n准备对LinkedIn社交网站中学校的数据采集，了解其对应的API。', '刚刚接触这些新的领域，掌握速度没有想象的那么快。并且一些英文的文档读起来相对较慢', '继续学习相关知识，通过对API的实际应用加快对对应API的熟悉。', '进行Linkedin相关接口的熟悉，并且爬取相关的内容。\r\n相关基础知识的学习。\r\n及时完成上级以及陆哥交给我的任务。');
INSERT INTO `daily` VALUES ('4', '10005', 'Tom', '2016-01-19', '1.熟悉gephi这款软件，并将它大英百科进行分析。\r\n2.将数据导成svg格式，并将这个svg格式应用到网页中去，实现part、division和大英百科之间的跳转。\r\n3.将数据导成pdf格式，并通过一款软件给pdf的文字与其他pdf文件之间添加跳转。', 'Gephi文字相对较小，且有重叠，节点之间间距较大。无法实现节点往下的跳转。', '继续上网查看相关资料。', '继续对Gephi的图片进行处理，实现上述还没解决的问题。\r\n实现gephi按照节点的子节点数目显示节点。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('5', '10005', 'Tom', '2015-11-20', '1.本周完成了Twitter大学风湿数据的采集。\r\n2.了解了Linkedin职业社交网站相关的API，并寻找对应采集数据的接口。\r\n3.了解了Facebook相关的接口，并准备Facebook大学相关的基本数据的采集。\r\n4.在Facebook账号上添加各个大学的官方账号。\r\n了解如何解析数据相对较为复杂的JSON数据格式。了解Jackson这个库的一些基本的API，为后续工作做好准备。', 'Linkedin社交网站API在5月份大幅回收，导致没有我们所需要的API。\r\nFacebook社交网站当like了1000多个学校后出现异常，无法继续like。', '将这1000多所学校分多次like，无法再一天就完成对所有学校的like', '完成相关facebook数据爬虫程序的基本编写并开始爬取Facebook上的数据。\r\n经历完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('6', '10005', 'Tom', '2015-11-27', '1.本周完成了对Facebook大学数据采集的程序的编写，并开始对这些大学数据进行了采集。预计下周可以采集完成相关的书籍。\r\n2.了解巩固了数据库相关的知识，并对自己的程序中数据库相关的操作进行了优化。\r\n准备下周对6万多个公司的Facebook数据进行采集，在原有程序上进行改进。', '数据库插入数据显得很慢，而且程序中有一点小BUG。', '对程序进行优化，了解了更多Mysql相关知识。', '完成相关facebook数据爬虫程序的改写并开始爬取Facebook公司上的数据。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('7', '10005', 'Tom', '2015-12-04', '1.改写原先Facebook大学数据采集的程序，改写为采集6万多个公司的程序。并在上周开始进行采集，平均每天采集的速度为300到400个。\r\n2.因为Facebook中有一些学校名字并非为wiki官方名，所以在张总和倪哥的知道下，使用我们原先有的数据库对搜索名字时进行重定向。从而不需要人工采集。\r\n3.准备下周Twitter中6万多个公司的数据采集程序的编写及实现。\r\n了解git这个工具，并且学会在命令行下如何使用这个工具，并与陆哥商量公司使用哪个项目管理工具。', '有很多company的facebook名与我们获得的名字不同。', '使用原来我们有的数据库，对我们需要的数据进行重定向。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n与陆哥商量我们具体使用的项目管理的具体工具。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('8', '10005', 'Tom', '2015-12-11', '1.继续运行爬取twitter的程序，在中间遇到一些问题并且解决了相关的一部分问题。\r\n2.部分twitter中公司粉丝数过多，例如有几个公司的粉丝数为6000万，如果按照twitter官方文档，爬取时间需要很久，所以先把一些粉丝数多的公司留到后期爬取。\r\n继续了解Git这款工具，对命令行操作有了更加多的了解。', '账号数量不够，爬取速度过于慢。', '通过申诉又获取到了两个twitter账号加快了爬取的速度。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n与部门同事商量我们具体使用的项目管理的具体工具。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('9', '10005', 'Tom', '2015-12-18', '1.继续运行爬取twitter的程序，本周开始有5个账号在爬取数据，但是中间由于其中两个账号被封了，但是后面通过邮件又获取到了几个账号，现在6个账号在那边爬取数据。\r\n2.整理了下Twitter需要爬取的数据库中需要爬取的公司，将社交，媒体等一系列粉丝数较多的公司以及已经爬取好的公司进行分类。\r\n3.将dbpedia的大学表格导入到数据库中，并且将学校名字做了相应的变化。\r\n4.继续加深MySQL的理解，自行学习MySQL方面的知识。', '部分公司粉丝数过多。', '将粉丝数多的进行相应的分类，优先爬取粉丝数少的大学。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n研究下httpunit这个包，看是否能为我们爬取到相应的数据。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `daily` VALUES ('10', '10005', 'Tom', '2015-12-25', '1.继续运行爬取twitter的程序，本周开始有11个账号在爬取数据,每天大约能爬有200万以上的公司粉丝关系。\r\n2.Facebook的公司的数据差不多应该在下周可以爬取完成。\r\n3.张总发了R语言相关的一些信息，陆哥让我先学习下用R语言画地图。然后我对数据分析语言R进行了简单的学习。\r\n4.通过手工搜寻，将陆哥给我的大学排名的表格中空缺的数据通过wikipeda，百度，以及官网，获得相对应的数据。', '对R语言，有些知识不是很懂。', '继续加紧学习相关知识。', '在Facebook公司数据爬取完毕后，对Facebook的数据库进行相应的处理。\r\n继续注册几个Twitter账号然后在台式机上继续跑，加快数据抓取的进度。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');



#月报表
CREATE TABLE `monthly` (
    `ID` int(20) not null PRIMARY KEY AUTO_INCREMENT,
    `UserID` varchar(20) NOT NULL,
    `Name` varchar(30) not null,
    `Date` date not null,
    `Content` varchar(1000) not null,
    `Problem` varchar(500) not null,
    `Solution` varchar(500) not null,
    `NextPlan` varchar(500) not null,
    constraint fk_monthly_userID FOREIGN KEY(UserID) REFERENCES  userinfo(Id)
)ENGINE=InnoDB DEFAULT CHARSET=utf8;

#添加月报信息
INSERT INTO `monthly` VALUES ('1', '10005', 'Tom', '2015-10-30', '1.办理入职相关手续\r\n2.Java相关基础知识的学习，本周基本把Java基础部分都看了一遍，并且自己也敲了相应代码熟悉。\r\n3.完成陆哥交给我的任务，根据数据库中大学英文名字翻墙查找其官方Twitter并导入数据库中。\r\n在周五，执行相应的爬虫在Twitter爬取各个大学相应的人数，并且自行研究相关的代码。', '刚刚接触Java，很多相关的Java API并不是很熟悉。\r\n因为用的是同一个数据库主机以及翻墙，爬虫程序相对执行速度较慢。', '相对于API不熟悉，需要在今后的编程生涯中继续好好熟悉。', '及时完成上级以及陆哥交给我的任务。');
INSERT INTO `monthly` VALUES ('2', '10005', 'Tom', '2015-11-06', '1.把twitter相关的数据库从220搬移到自己的工作电脑，并继续运行爬虫程序，爬取相关的数据，在转移数据库后爬虫程序爬取速度加快。\r\n2.使用Java进行编程练习，进一步熟悉Java语言，并且了解一些相关的库。\r\n3.学习正则表达式相关基础知识。\r\n4.完成陆哥给的爬取维基百科上大学创建年份的程序，并将数据爬取\r\n5.完成了相关数据从csv格式转换到json。\r\n学习相关爬虫程序的设计。', '在实现抓取wikipedia中大学的创建年份的时候，很小一部分大学并没有抓取到，原因是正则表达式并没有完全覆盖所有。', '手动搜索这些大学，并将其加到数据库中。', '及时完成上级以及陆哥交给我的任务。');
INSERT INTO `monthly` VALUES ('3', '10005', 'Tom', '2015-11-13', '1.继续Twitter中大学数据的采集，预计下周可完成该项任务。\r\n2.学习JavaScript相关基础，了解百度echarts库相关的知识，并能做一些简单的图表，为后续陆哥给我图表任务做准备。\r\n3.了解OpenLayers map库的一些基础知识，为后续工作做准备。\r\n准备对LinkedIn社交网站中学校的数据采集，了解其对应的API。', '刚刚接触这些新的领域，掌握速度没有想象的那么快。并且一些英文的文档读起来相对较慢', '继续学习相关知识，通过对API的实际应用加快对对应API的熟悉。', '进行Linkedin相关接口的熟悉，并且爬取相关的内容。\r\n相关基础知识的学习。\r\n及时完成上级以及陆哥交给我的任务。');
INSERT INTO `monthly` VALUES ('4', '10005', 'Tom', '2016-01-19', '1.熟悉gephi这款软件，并将它大英百科进行分析。\r\n2.将数据导成svg格式，并将这个svg格式应用到网页中去，实现part、division和大英百科之间的跳转。\r\n3.将数据导成pdf格式，并通过一款软件给pdf的文字与其他pdf文件之间添加跳转。', 'Gephi文字相对较小，且有重叠，节点之间间距较大。无法实现节点往下的跳转。', '继续上网查看相关资料。', '继续对Gephi的图片进行处理，实现上述还没解决的问题。\r\n实现gephi按照节点的子节点数目显示节点。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('5', '10005', 'Tom', '2015-11-20', '1.本周完成了Twitter大学风湿数据的采集。\r\n2.了解了Linkedin职业社交网站相关的API，并寻找对应采集数据的接口。\r\n3.了解了Facebook相关的接口，并准备Facebook大学相关的基本数据的采集。\r\n4.在Facebook账号上添加各个大学的官方账号。\r\n了解如何解析数据相对较为复杂的JSON数据格式。了解Jackson这个库的一些基本的API，为后续工作做好准备。', 'Linkedin社交网站API在5月份大幅回收，导致没有我们所需要的API。\r\nFacebook社交网站当like了1000多个学校后出现异常，无法继续like。', '将这1000多所学校分多次like，无法再一天就完成对所有学校的like', '完成相关facebook数据爬虫程序的基本编写并开始爬取Facebook上的数据。\r\n经历完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('6', '10005', 'Tom', '2015-11-27', '1.本周完成了对Facebook大学数据采集的程序的编写，并开始对这些大学数据进行了采集。预计下周可以采集完成相关的书籍。\r\n2.了解巩固了数据库相关的知识，并对自己的程序中数据库相关的操作进行了优化。\r\n准备下周对6万多个公司的Facebook数据进行采集，在原有程序上进行改进。', '数据库插入数据显得很慢，而且程序中有一点小BUG。', '对程序进行优化，了解了更多Mysql相关知识。', '完成相关facebook数据爬虫程序的改写并开始爬取Facebook公司上的数据。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('7', '10005', 'Tom', '2015-12-04', '1.改写原先Facebook大学数据采集的程序，改写为采集6万多个公司的程序。并在上周开始进行采集，平均每天采集的速度为300到400个。\r\n2.因为Facebook中有一些学校名字并非为wiki官方名，所以在张总和倪哥的知道下，使用我们原先有的数据库对搜索名字时进行重定向。从而不需要人工采集。\r\n3.准备下周Twitter中6万多个公司的数据采集程序的编写及实现。\r\n了解git这个工具，并且学会在命令行下如何使用这个工具，并与陆哥商量公司使用哪个项目管理工具。', '有很多company的facebook名与我们获得的名字不同。', '使用原来我们有的数据库，对我们需要的数据进行重定向。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n与陆哥商量我们具体使用的项目管理的具体工具。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('8', '10005', 'Tom', '2015-12-11', '1.继续运行爬取twitter的程序，在中间遇到一些问题并且解决了相关的一部分问题。\r\n2.部分twitter中公司粉丝数过多，例如有几个公司的粉丝数为6000万，如果按照twitter官方文档，爬取时间需要很久，所以先把一些粉丝数多的公司留到后期爬取。\r\n继续了解Git这款工具，对命令行操作有了更加多的了解。', '账号数量不够，爬取速度过于慢。', '通过申诉又获取到了两个twitter账号加快了爬取的速度。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n与部门同事商量我们具体使用的项目管理的具体工具。\r\n经力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('9', '10005', 'Tom', '2015-12-18', '1.继续运行爬取twitter的程序，本周开始有5个账号在爬取数据，但是中间由于其中两个账号被封了，但是后面通过邮件又获取到了几个账号，现在6个账号在那边爬取数据。\r\n2.整理了下Twitter需要爬取的数据库中需要爬取的公司，将社交，媒体等一系列粉丝数较多的公司以及已经爬取好的公司进行分类。\r\n3.将dbpedia的大学表格导入到数据库中，并且将学校名字做了相应的变化。\r\n4.继续加深MySQL的理解，自行学习MySQL方面的知识。', '部分公司粉丝数过多。', '将粉丝数多的进行相应的分类，优先爬取粉丝数少的大学。', '完成相关twitter数据爬虫程序编写，并且关注原先写的程序是否有什么问题。\r\n研究下httpunit这个包，看是否能为我们爬取到相应的数据。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');
INSERT INTO `monthly` VALUES ('10', '10005', 'Tom', '2015-12-25', '1.继续运行爬取twitter的程序，本周开始有11个账号在爬取数据,每天大约能爬有200万以上的公司粉丝关系。\r\n2.Facebook的公司的数据差不多应该在下周可以爬取完成。\r\n3.张总发了R语言相关的一些信息，陆哥让我先学习下用R语言画地图。然后我对数据分析语言R进行了简单的学习。\r\n4.通过手工搜寻，将陆哥给我的大学排名的表格中空缺的数据通过wikipeda，百度，以及官网，获得相对应的数据。', '对R语言，有些知识不是很懂。', '继续加紧学习相关知识。', '在Facebook公司数据爬取完毕后，对Facebook的数据库进行相应的处理。\r\n继续注册几个Twitter账号然后在台式机上继续跑，加快数据抓取的进度。\r\n尽力完成大家布置下来的任务。\r\n继续学习相关的知识，为后续工作做准备。');

