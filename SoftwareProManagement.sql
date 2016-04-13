#创建数据库
create database softwarepromanagement default charset utf8;

#创建项目基本信息表
create table `projectbaseinfo` (
	id int(20) not null unique primary key,
	projectname varchar(50) not null,
	customername varchar(30) not null,
	projectmanager varchar(30) not null,
	projectamount int(20),
	developernum int,
	planstostarttime date,
	planstofinishtime date,
	actualstarttime  date,
	actualfinishtime  date,
	priority enum('1','2','3','4','5'),
	finishstatus bool,
	projectremark text
);
#创建项目计划信息表
create table 'projectplaninfo' (
	id int(20) not null unique primary key,
	plantitle varchar(50) not null,
	projectid int(20) not null,
	projectname varchar(50) not null,
	projectmodule varchar(50)
);



#创建项目需求信息表

#创建项目模块信息表

#创建项目功能信息表

#创建项目成本信息表





#创建用户数据信息

create table `userinfo` (
	id varchar(20) not null unique primary key,
	password varchar(20) not null
);


