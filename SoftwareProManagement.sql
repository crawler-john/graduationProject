#�������ݿ�
create database softwarepromanagement default charset utf8;

#������Ŀ������Ϣ��
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
#������Ŀ�ƻ���Ϣ��
create table 'projectplaninfo' (
	id int(20) not null unique primary key,
	plantitle varchar(50) not null,
	projectid int(20) not null,
	projectname varchar(50) not null,
	projectmodule varchar(50)
);



#������Ŀ������Ϣ��

#������Ŀģ����Ϣ��

#������Ŀ������Ϣ��

#������Ŀ�ɱ���Ϣ��





#�����û�������Ϣ

create table `userinfo` (
	id varchar(20) not null unique primary key,
	password varchar(20) not null
);


