#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include "daily.h"
#include "addproject.h"
#include "monthly.h"
#include "adduser.h"
#include "alterpassword.h"
#include "alteraddress.h"
#include "alteremail.h"
#include "alterphone.h"
#include "proinfo.h"

MainWindow::MainWindow(DBManager *DbManager,QString  UserID,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->DbManager = DbManager;
    setWindowFlags(Qt::FramelessWindowHint);
    connect(this,SIGNAL(SigSelectStackedWidget(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(ui->treeWidget,SIGNAL(itemClicked(QTreeWidgetItem*,int)),this,SLOT(SlotTreeWidgetClick(QTreeWidgetItem*)));
    emit SigSelectStackedWidget(0);

    ui->treeWidget->expandAll();

    //获得登录信息
    m_userinfo.setID(UserID);
    initialize();
    getUserInfo(UserID);

}
//获取用户当前所拥有的权限并按照权限显示
void MainWindow::getUserInfo(QString  UserID)
{
    DbManager->DBGetUserInfo(UserID,this->m_userinfo);
    ui->label_username->setText(m_userinfo.getName());
    //设置登录
    DbManager->DBSetLoginFlag(m_userinfo.getID(),true);
    //设置权限相关的内容
    if((!m_userinfo.getPerm_myProject() && !m_userinfo.getPerm_myTask() && !m_userinfo.getPerm_setInfo()))
    {
        ui->treeWidget->topLevelItem(0)->setHidden(true);
    }
    ui->treeWidget->topLevelItem(0)->child(0)->setHidden(!m_userinfo.getPerm_myProject());
    ui->treeWidget->topLevelItem(0)->child(1)->setHidden(!m_userinfo.getPerm_myTask());
    ui->treeWidget->topLevelItem(0)->child(2)->setHidden(!m_userinfo.getPerm_setInfo());
    if((!m_userinfo.getPerm_proInfoManage() && !m_userinfo.getPerm_StaffManage() && !m_userinfo.getPerm_CostManage()
        && !m_userinfo.getPerm_RequireTaskManage() && !m_userinfo.getPerm_PlanManage() && !m_userinfo.getPerm_WeeklyReports()
        &&!m_userinfo.getPerm_MonthlyReports()))
    {
        ui->treeWidget->topLevelItem(1)->setHidden(true);
    }
    ui->treeWidget->topLevelItem(1)->child(0)->setHidden(!m_userinfo.getPerm_proInfoManage());
    ui->treeWidget->topLevelItem(1)->child(1)->setHidden(!m_userinfo.getPerm_StaffManage());
    ui->treeWidget->topLevelItem(1)->child(2)->setHidden(!m_userinfo.getPerm_CostManage());
    ui->treeWidget->topLevelItem(1)->child(3)->setHidden(!m_userinfo.getPerm_RequireTaskManage());
    ui->treeWidget->topLevelItem(1)->child(4)->setHidden(!m_userinfo.getPerm_RequireTaskManage());
    ui->treeWidget->topLevelItem(1)->child(5)->setHidden(!m_userinfo.getPerm_PlanManage());
    ui->treeWidget->topLevelItem(1)->child(6)->setHidden(!m_userinfo.getPerm_WeeklyReports());
    ui->treeWidget->topLevelItem(1)->child(7)->setHidden(!m_userinfo.getPerm_MonthlyReports());
    if((!m_userinfo.getPerm_OrganManage() && !m_userinfo.getPerm_StaffManage() && !m_userinfo.getPerm_StaffManage()
        && !m_userinfo.getPerm_LoginUser() && !m_userinfo.getPerm_PermManage()))
    {
        ui->treeWidget->topLevelItem(2)->setHidden(true);
    }
    ui->treeWidget->topLevelItem(2)->child(0)->setHidden(true);
    ui->treeWidget->topLevelItem(2)->child(1)->setHidden(true);
    ui->treeWidget->topLevelItem(2)->child(2)->setHidden(!m_userinfo.getPerm_RoleManage());
    ui->treeWidget->topLevelItem(2)->child(3)->setHidden(!m_userinfo.getPerm_LoginUser());
    ui->treeWidget->topLevelItem(2)->child(4)->setHidden(!m_userinfo.getPerm_PermManage());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}


void MainWindow::SlotTreeWidgetClick(QTreeWidgetItem * item)
{
    QTreeWidgetItem *parent = item->parent();
    if(NULL==parent) //注意：最顶端项是没有父节点的，双击这些项时注意(陷阱)
        return;
    int col = parent->indexOfChild(item); //item在父项中的节点行号(从0开始)
    int parcol = ui->treeWidget->indexOfTopLevelItem(parent);
    switch(parcol)
    {
    case 0:
        emit SigSelectStackedWidget(col+1);
        switch(col)
        {
        case 0:
            //我的项目操作
            MyProOperation();
            break;
        case 1:
            //我的任务操作
            MyTaskOperation();
            break;
        case 2:
            //个人信息操作
            PersonalInfoOperation();
            break;
        }
        break;
    case 1:
        emit SigSelectStackedWidget(col+4);
        switch(col)
        {
        case 0:
            //项目信息管理操作
            ProInfoManageOperation();
            break;
        case 1:
            //项目人员管理操作
            ProStaffManageOperation();
            break;
        case 2:
            //项目成本管理操作
            ProCostManageOperation();
            break;
        case 3:
            //项目需求管理操作
            ProRequestManageOperation();
            break;
        case 4:
            //项目任务管理操作
            ProTaskManageOperation();
            break;
        case 5:
            //项目进度管理操作
            break;
        case 6:
            //周报操作
            DailyOperation();
            break;

        case 7:
            //月报操作
            MonthlyOperation();
            break;

        }
        break;
    case 2:
        emit SigSelectStackedWidget(col+12);
        switch(col)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            //角色管理操作
            RoleManageOperation();
            break;
        case 3:
            //登入用户管理
            LoginUserManageOperation();
            break;
        case 4:
            //权限管理
            PermManageOperation();
            break;
        }
        break;
    default:
        break;
    }
}
//退出登录槽函数
void MainWindow::on_BtnLoginOutSystem_clicked()
{
    DbManager->DBSetLoginFlag(m_userinfo.getID(),false);
    qDebug() << "退出登录槽函数";
    close();
}
//重新登录槽函数
void MainWindow::on_BtnReLogin_clicked()
{
    DbManager->DBSetLoginFlag(m_userinfo.getID(),false);
    qDebug() << "重新登录槽函数";
}

void MainWindow::on_BtnClose_clicked()
{
    DbManager->DBSetLoginFlag(m_userinfo.getID(),false);
    qDebug() << "退出登录槽函数";
    close();
}

void MainWindow::on_btnAddDaily_clicked()
{
    Daily *daily = new Daily;
    connect(daily,SIGNAL(SigAddDaily(QString,QString,QString,QString)),this,SLOT(SlotAddDaily(QString,QString,QString,QString)));
    daily->exec();
    disconnect(daily,SIGNAL(SigAddDaily(QString,QString,QString,QString)),this,SLOT(SlotAddDaily(QString,QString,QString,QString)));
    delete daily;
}

void MainWindow::on_BtnAddPro_clicked()
{
    AddProject *addProject = new AddProject(DbManager);
    connect(addProject,SIGNAL(sigAddProInfoSuccess()),this,SLOT(slotAddProInfoSuccess()));
    addProject->exec();
    disconnect(addProject,SIGNAL(sigAddProInfoSuccess()),this,SLOT(slotAddProInfoSuccess()));
    delete addProject;
}

void MainWindow::on_pushButton_clicked()
{
    Monthly *monthly = new Monthly;
    connect(monthly,SIGNAL(SigAddMonthly(QString,QString,QString,QString)),this,SLOT(SlotAddMonthly(QString,QString,QString,QString)));
    monthly->exec();
    disconnect(monthly,SIGNAL(SigAddMonthly(QString,QString,QString,QString)),this,SLOT(SlotAddMonthly(QString,QString,QString,QString)));
    delete monthly;
}
//点击添加新用户
void MainWindow::on_BtnAddUser_clicked()
{
    AddUser *addUser = new AddUser(DbManager);
    connect(addUser,SIGNAL(sigAddUserInfoSuccess()),this,SLOT(slotAddUserInfoSuccess()));
    addUser->exec();
    disconnect(addUser,SIGNAL(sigAddUserInfoSuccess()),this,SLOT(slotAddUserInfoSuccess()));
    delete addUser;
}

void MainWindow::PersonalInfoOperation()
{
    ui->infoAlter->clear();
    ui->infoAccount->setText(m_userinfo.getID());
    ui->infoAddress->setText(m_userinfo.getAddress());
    ui->infoBirthday->setText(m_userinfo.getBirthday().toString(Qt::ISODate));
    ui->infoBirthPlace->setText(m_userinfo.getBirthPlace());
    ui->infoEmail->setText(m_userinfo.getEmail());
    ui->infoGraduation->setText(m_userinfo.getGraduation());
    ui->infoName->setText(m_userinfo.getName());
    ui->infoPhone->setText(m_userinfo.getPhone());
    ui->infoPost->setText(m_userinfo.getPost());
    ui->infoRemark->setText(m_userinfo.getRemark());
    ui->infoSex->setText(m_userinfo.getSex());
    ui->infoWorkyears->setNum(m_userinfo.getWorkYears());
}

void MainWindow::ProInfoManageOperation()
{

    ui->errorProInfoManager->clear();
    if(m_userinfo.getPost() != "软件项目管理员")
    {
        ui->BtnAddPro->hide();
    }
    QString head[6];
    head[0] = "项目名";
    head[1] = "项目创建时间";
    head[2] = "优先级";
    head[3] = "项目状态";
    head[4] = "项目预支";
    head[5] = "项目经理";
    int headWidth[6] ={200,80,50,80,80,100};
    //设置表格属性
    setTableWeight(ui->tableProInfo,6,head,headWidth);

    //获取数据
    ProInfoList.clear();

    DbManager->DBGetProInfoList(ProInfoList);
    //在表格中显示数据
    addTableProInfoData(ui->tableProInfo,ProInfoList);
}

void MainWindow::ProStaffManageOperation()
{
}

void MainWindow::ProCostManageOperation()
{
}

void MainWindow::ProRequestManageOperation()
{
}

void MainWindow::ProTaskManageOperation()
{
}

void MainWindow::ProProcessManageOperation()
{
}

void MainWindow::DailyOperation()
{
    ui->errorDaily->clear();
    ui->boxDaily->clear();
    if(m_userinfo.getPost() != "普通员工")
    {
        QStringList List;
        DbManager->DBGetStaff(List);
        ui->boxDaily->addItems(List);
    }
    else
    {
        ui->boxDaily->hide();
    }
    QString head[6];
    head[0] = "姓名";
    head[1] = "日期";
    head[2] = "内容";
    head[3] = "问题";
    head[4] = "解决方法";
    head[5] = "下周计划";
    int headWidth[6] ={50,80,130,120,120,120};
    //设置表格属性
    setTableWeight(ui->tableDaily,6,head,headWidth);
    //获取数据
    QList<DailyInfo *> List;
    DbManager->DBGetDailyList(m_userinfo.getID(),List);
    //在表格中显示数据
    addTableData(ui->tableDaily,List);



}

void MainWindow::MonthlyOperation()
{
    ui->boxDaily->clear();
    if(m_userinfo.getPost() != "普通员工")
    {
        QStringList List;
        DbManager->DBGetStaff(List);
        ui->boxMonthly->addItems(List);
    }
    else
    {
        ui->boxMonthly->hide();
    }
    QString head[6];
    head[0] = "姓名";
    head[1] = "日期";
    head[2] = "内容";
    head[3] = "问题";
    head[4] = "解决方法";
    head[5] = "下周计划";
    int headWidth[6] ={50,80,130,120,120,120};
    //设置表格属性
    setTableWeight(ui->tableMonthly,6,head,headWidth);
    //获取数据
    QList<DailyInfo *> List;
    DbManager->DBGetMonthlyList(m_userinfo.getID(),List);
    //在表格中显示数据
    addTableData(ui->tableMonthly,List);
}

void MainWindow::RoleManageOperation()
{
    ui->roleCombo->clear();
    // 添加项目信息
    QStringList list;
    DbManager->DBGetProject(list);
    ui->roleCombo->addItem("所有人员");
    ui->roleCombo->addItems(list);


    QString head[6];
    head[0] = "账号";
    head[1] = "姓名";
    head[2] = "职位";
    head[3] = "电话";
    head[4] = "电子邮箱";
    head[5] = "工作年限";
    int headWidth[6] ={80,80,120,100,180,30};
    //设置表格属性
    setTableWeight(ui->tableRole,6,head,headWidth);

    //获取数据
    AllUserInfoList.clear();

    DbManager->DBGetLoginUserInfo(AllUserInfoList,1);
    //在表格中显示数据
    addTableLoginUserInfoData(ui->tableRole,AllUserInfoList);
}

void MainWindow::LoginUserManageOperation()
{
    QString head[6];
    head[0] = "账号";
    head[1] = "姓名";
    head[2] = "职位";
    head[3] = "电话";
    head[4] = "电子邮箱";
    head[5] = "工作年限";
    int headWidth[6] ={80,80,120,100,180,30};
    //设置表格属性
    setTableWeight(ui->tableLogin,6,head,headWidth);

    //获取数据
    LoginUserInfoList.clear();

    DbManager->DBGetLoginUserInfo(LoginUserInfoList,0);
    //在表格中显示数据
    addTableLoginUserInfoData(ui->tableLogin,LoginUserInfoList);

}

void MainWindow::PermManageOperation()
{
    ui->perminfo->clear();
    QString head[6];
    head[0] = "账号";
    head[1] = "姓名";
    head[2] = "职位";
    head[3] = "电话";
    head[4] = "电子邮箱";
    head[5] = "工作年限";
    int headWidth[6] ={80,80,120,100,180,30};
    //设置表格属性
    setTableWeight(ui->tablePerm,6,head,headWidth);

    //获取数据
    AllUserInfoList.clear();

    DbManager->DBGetLoginUserInfo(AllUserInfoList,1);
    //在表格中显示数据
    addTableLoginUserInfoData(ui->tablePerm,AllUserInfoList);
}

void MainWindow::setTableWeight(QTableWidget *table, int row, QString head[20],int width[20])
{
    table->setColumnCount(6); //设置列数
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    //设置表头内容
    QStringList header;
    for(int index = 0; index < row ;index++)
    {
        header.insert(index, head[index]);
    }
    table->setHorizontalHeaderLabels(header);
    //设置表头字体
    QFont font = table->horizontalHeader()->font();
    font.setBold(true);
    table->horizontalHeader()->setFont(font);

    table->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    table->verticalHeader()->setDefaultSectionSize(15); //设置行高
    table->setFrameShape(QFrame::NoFrame); //设置无边框
    table->setShowGrid(false); //设置不显示格子线
    table->verticalHeader()->setVisible(false); //设置垂直头不可见
    table->setSelectionMode(QAbstractItemView::ExtendedSelection);  //可多选（Ctrl、Shift、  Ctrl+A都可以）
    table->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    table->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    for(int index = 0; index < row;index++)
    {
        table->horizontalHeader()->resizeSection(index,width[index]); //设置表头第一列的宽度为150
    }

    table->horizontalHeader()->setFixedHeight(20); //设置表头的高度
    table->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}"); //设置表头背景色

}

void MainWindow::addTableData(QTableWidget *table,QList<DailyInfo *> &List)
{
    table->setRowCount(0);
    table->clearContents();

    QList<DailyInfo *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();
        QTableWidgetItem *item2 = new QTableWidgetItem();
        QTableWidgetItem *item3 = new QTableWidgetItem();
        QTableWidgetItem *item4 = new QTableWidgetItem();
        QTableWidgetItem *item5 = new QTableWidgetItem();

        item->setText((*iter)->getName());
        item1->setText((*iter)->getDate().toString(Qt::ISODate));
        item2->setText((*iter)->getContent());
        item3->setText((*iter)->getProblem());
        item4->setText((*iter)->getSolution());
        item5->setText((*iter)->getNextPlan());
        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
        table->setItem(row_count, 2, item2);
        table->setItem(row_count, 3, item3);
        table->setItem(row_count, 4, item4);
        table->setItem(row_count, 5, item5);
    }
}

void MainWindow::addTableProInfoData(QTableWidget *table, QList<ProInfo *> &List)
{
    table->setRowCount(0);
    table->clearContents();

    QList<ProInfo *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();
        QTableWidgetItem *item2 = new QTableWidgetItem();
        QTableWidgetItem *item3 = new QTableWidgetItem();
        QTableWidgetItem *item4 = new QTableWidgetItem();
        QTableWidgetItem *item5 = new QTableWidgetItem();

        item->setText((*iter)->getName());
        item1->setText((*iter)->getCreate().toString(Qt::ISODate));
        item2->setText(QString::number((*iter)->getPriority()));
        item3->setText((*iter)->getState());
        item4->setText(QString::number((*iter)->getMoney()));
        item5->setText((*iter)->getManager());
        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
        table->setItem(row_count, 2, item2);
        table->setItem(row_count, 3, item3);
        table->setItem(row_count, 4, item4);
        table->setItem(row_count, 5, item5);
    }
}

void MainWindow::addTableLoginUserInfoData(QTableWidget *table, QList<userInfo *> &List)
{
    table->setRowCount(0);
    table->clearContents();

    QList<userInfo *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();
        QTableWidgetItem *item2 = new QTableWidgetItem();
        QTableWidgetItem *item3 = new QTableWidgetItem();
        QTableWidgetItem *item4 = new QTableWidgetItem();
        QTableWidgetItem *item5 = new QTableWidgetItem();

        item->setText((*iter)->getID());
        item1->setText((*iter)->getName());
        item2->setText((*iter)->getPost());
        item3->setText((*iter)->getPhone());
        item4->setText((*iter)->getEmail());
        item5->setText(QString::number((*iter)->getWorkYears()));
        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
        table->setItem(row_count, 2, item2);
        table->setItem(row_count, 3, item3);
        table->setItem(row_count, 4, item4);
        table->setItem(row_count, 5, item5);
    }
}

void MainWindow::initialize()
{
    QDate date = QDate::currentDate();

    ui->BtnSetProRealStart->hide();
    ui->BtnSetProRealEnd->hide();

    ui->MyProStartYear->setRange(2010,2050);
    ui->MyProEndYear->setRange(2010,2050);
    ui->MyProStartMonth->setRange(1,12);
    ui->MyProEndMonth->setRange(1,12);
    ui->MyProStartDay->setRange(1,31);
    ui->MyProEndDay->setRange(1,31);

    ui->MyProEndYear->setValue(date.year());
    ui->MyProEndMonth->setValue(date.month());
    ui->MyProEndDay->setValue(date.day());

    ui->MyTaskStartYear->setRange(2010,2050);
    ui->MyTaskEndYear->setRange(2010,2050);
    ui->MyTaskStartMonth->setRange(1,12);
    ui->MyTaskEndMonth->setRange(1,12);
    ui->MyTaskStartDay->setRange(1,31);
    ui->MyTaskEndDay->setRange(1,31);

    ui->MyTaskEndYear->setValue(date.year());
    ui->MyTaskEndMonth->setValue(date.month());
    ui->MyTaskEndDay->setValue(date.day());


    ui->MyTaskStartYear->setRange(2010,2050);
    ui->MyTaskEndYear->setRange(2010,2050);
    ui->MyTaskStartMonth->setRange(1,12);
    ui->MyTaskEndMonth->setRange(1,12);
    ui->MyTaskStartDay->setRange(1,31);
    ui->MyTaskEndDay->setRange(1,31);

    ui->MyTaskEndYear->setValue(date.year());
    ui->MyTaskEndMonth->setValue(date.month());
    ui->MyTaskEndDay->setValue(date.day());

    ui->ProInfoManagerStartYear->setRange(2010,2050);
    ui->ProInfoManagerEndYear->setRange(2010,2050);
    ui->ProInfoManagerStartMonth->setRange(1,12);
    ui->ProInfoManagerEndMonth->setRange(1,12);
    ui->ProInfoManagerStartDay->setRange(1,31);
    ui->ProInfoManagerEndDay->setRange(1,31);

    ui->ProInfoManagerEndYear->setValue(date.year());
    ui->ProInfoManagerEndMonth->setValue(date.month());
    ui->ProInfoManagerEndDay->setValue(date.day());

    ui->RequestManagerStartYear->setRange(2010,2050);
    ui->RequestManagerEndYear->setRange(2010,2050);
    ui->RequestManagerStartMonth->setRange(1,12);
    ui->RequestManagerEndMonth->setRange(1,12);
    ui->RequestManagerStartDay->setRange(1,31);
    ui->RequestManagerEndDay->setRange(1,31);

    ui->RequestManagerEndYear->setValue(date.year());
    ui->RequestManagerEndMonth->setValue(date.month());
    ui->RequestManagerEndDay->setValue(date.day());

    ui->TaskManagerStartYear->setRange(2010,2050);
    ui->TaskManagerEndYear->setRange(2010,2050);
    ui->TaskManagerStartMonth->setRange(1,12);
    ui->TaskManagerEndMonth->setRange(1,12);
    ui->TaskManagerStartDay->setRange(1,31);
    ui->TaskManagerEndDay->setRange(1,31);

    ui->TaskManagerEndYear->setValue(date.year());
    ui->TaskManagerEndMonth->setValue(date.month());
    ui->TaskManagerEndDay->setValue(date.day());

    ui->ProcessManagerStartYear->setRange(2010,2050);
    ui->ProcessManagerEndYear->setRange(2010,2050);
    ui->ProcessManagerStartMonth->setRange(1,12);
    ui->ProcessManagerEndMonth->setRange(1,12);
    ui->ProcessManagerStartDay->setRange(1,31);
    ui->ProcessManagerEndDay->setRange(1,31);

    ui->ProcessManagerEndYear->setValue(date.year());
    ui->ProcessManagerEndMonth->setValue(date.month());
    ui->ProcessManagerEndDay->setValue(date.day());

    ui->DailyStartYear->setRange(2010,2050);
    ui->DailyEndYear->setRange(2010,2050);
    ui->DailyStartMonth->setRange(1,12);
    ui->DailyEndMonth->setRange(1,12);
    ui->DailyStartDay->setRange(1,31);
    ui->DailyEndDay->setRange(1,31);

    ui->DailyEndYear->setValue(date.year());
    ui->DailyEndMonth->setValue(date.month());
    ui->DailyEndDay->setValue(date.day());

    ui->MonthlyStartYear->setRange(2010,2050);
    ui->MonthlyEndYear->setRange(2010,2050);
    ui->MonthlyStartMonth->setRange(1,12);
    ui->MonthlyEndMonth->setRange(1,12);
    ui->MonthlyStartDay->setRange(1,31);
    ui->MonthlyEndDay->setRange(1,31);

    ui->MonthlyEndYear->setValue(date.year());
    ui->MonthlyEndMonth->setValue(date.month());
    ui->MonthlyEndDay->setValue(date.day());

    //初始化项目管理界面
    ui->createYear->setRange(2010,2050);
    ui->createMonth->setRange(1,12);
    ui->createDay->setRange(1,31);
    ui->planStartYear->setRange(2010,2050);
    ui->planStartMonth->setRange(1,12);
    ui->planStartDay->setRange(1,31);

    ui->planEndYear->setRange(2010,2050);
    ui->planEndMonth->setRange(1,12);
    ui->planEndDay->setRange(1,31);

    ui->realStartYear->setRange(0,2050);
    ui->realStartMonth->setRange(0,12);
    ui->realStartDay->setRange(0,31);

    ui->realEndYear->setRange(0,2050);
    ui->realEndMonth->setRange(0,12);
    ui->realEndDay->setRange(0,31);

    ui->createYear->clear();
    ui->createMonth->clear();
    ui->createDay->clear();
    ui->planStartYear->clear();
    ui->planStartMonth->clear();
    ui->planStartDay->clear();
    ui->planEndYear->clear();
    ui->planEndMonth->clear();
    ui->planEndDay->clear();
    ui->realStartYear->clear();
    ui->realStartMonth->clear();
    ui->realStartDay->clear();
    ui->realEndYear->clear();
    ui->realEndMonth->clear();
    ui->realEndDay->clear();
    ui->proAddress->clear();

    //初始化我的项目
    ui->MyProName->clear();
    ui->MyProManager->clear();
    ui->MyProCost->clear();
    ui->MyProClient->clear();
    ui->MyProState->clear();
    ui->MyCreateYear->setRange(2010,2050);
    ui->MyCreateMonth->setRange(1,12);
    ui->MyCreateDay->setRange(1,31);
    ui->MyPlanStartYear->setRange(2010,2050);
    ui->MyPlanStartMonth->setRange(1,12);
    ui->MyPlanStartDay->setRange(1,31);

    ui->MyPlanEndYear->setRange(2010,2050);
    ui->MyPlanEndMonth->setRange(1,12);
    ui->MyPlanEndDay->setRange(1,31);

    ui->MyRealStartYear->setRange(0,2050);
    ui->MyRealStartMonth->setRange(0,12);
    ui->MyRealStartDay->setRange(0,31);

    ui->MyRealEndYear->setRange(0,2050);
    ui->MyRealEndMonth->setRange(0,12);
    ui->MyRealEndDay->setRange(0,31);

    ui->MyCreateYear->clear();
    ui->MyCreateMonth->clear();
    ui->MyCreateDay->clear();
    ui->MyPlanStartYear->clear();
    ui->MyPlanStartMonth->clear();
    ui->MyPlanStartDay->clear();
    ui->MyPlanEndYear->clear();
    ui->MyPlanEndMonth->clear();
    ui->MyPlanEndDay->clear();
    ui->MyRealStartYear->clear();
    ui->MyRealStartMonth->clear();
    ui->MyRealStartDay->clear();
    ui->MyRealEndYear->clear();
    ui->MyRealEndMonth->clear();
    ui->MyRealEndDay->clear();
    ui->MyProAddress->clear();
    ui->MyProDescribe->clear();
}
//修改密码按键点击槽函数
void MainWindow::on_BtnAlterPassword_clicked()
{
    alterPassword *AlterPassword = new alterPassword(this->m_userinfo.getPassword());
    connect(AlterPassword,SIGNAL(sigGetNewPassword(QString)),this,SLOT(disposeAlterPassword(QString)));
    connect(this,SIGNAL(SigAlterPassword(bool)),AlterPassword,SLOT(SlotAlterPassword(bool)));
    AlterPassword->exec();
    disconnect(this,SIGNAL(SigAlterPassword(bool)),AlterPassword,SLOT(SlotAlterPassword(bool)));
    disconnect(AlterPassword,SIGNAL(sigGetNewPassword(QString)),this,SLOT(disposeAlterPassword(QString)));
    delete AlterPassword;
}
//修改手机号按键点击槽函数
void MainWindow::on_BtnAlterPhone_clicked()
{
    AlterPhone *alterPhone = new AlterPhone;
    connect(alterPhone,SIGNAL(sigGetNewPhone(QString)),this,SLOT(disposeAlterPhone(QString)));
    alterPhone->exec();
    disconnect(alterPhone,SIGNAL(sigGetNewPhone(QString)),this,SLOT(disposeAlterPhone(QString)));
    delete alterPhone;
}

void MainWindow::on_BtnAlterEmail_clicked()
{
    AlterEmail *alterEmail = new AlterEmail;
    connect(alterEmail,SIGNAL(sigGetNewEmail(QString)),this,SLOT(disposeAlterEmail(QString)));
    alterEmail->exec();
    disconnect(alterEmail,SIGNAL(sigGetNewEmail(QString)),this,SLOT(disposeAlterEmail(QString)));
    delete alterEmail;
}

void MainWindow::on_BtnAlterAddress_clicked()
{
    AlterAddress *alterAddress = new AlterAddress;
    connect(alterAddress,SIGNAL(sigGetNewAddress(QString)),this,SLOT(disposeAlterAddress(QString)));
    alterAddress->exec();
    disconnect(alterAddress,SIGNAL(sigGetNewAddress(QString)),this,SLOT(disposeAlterAddress(QString)));
    delete alterAddress;
}

void MainWindow::disposeAlterPassword(QString newpassword)
{
    DBManager::eDbStatus status = DbManager->DBAlterPassword(m_userinfo.getID(),newpassword);
    if(status == DBManager::DB_SUCCESS)
    {
        emit SigAlterPassword(true);
        m_userinfo.setPassword(newpassword);
    }else
    {
        emit SigAlterPassword(false);
    }
}

void MainWindow::disposeAlterAddress(QString newAddress)
{
    ui->infoAlter->clear();
    DBManager::eDbStatus status = DbManager->DBAlterAddress(m_userinfo.getID(),newAddress);
    if(status == DBManager::DB_SUCCESS)
    {
        ui->infoAlter->setText("修改地址成功！");
        ui->infoAddress->setText(newAddress);
        m_userinfo.setAddress(newAddress);
    }else
    {
        ui->infoAlter->setText("服务器异常");
    }
}

void MainWindow::disposeAlterEmail(QString newEmail)
{
    ui->infoAlter->clear();
    DBManager::eDbStatus status = DbManager->DBAlterEmail(m_userinfo.getID(),newEmail);
    if(status == DBManager::DB_SUCCESS)
    {
        ui->infoAlter->setText("修改邮箱成功！");
        ui->infoEmail->setText(newEmail);
        m_userinfo.setEmail(newEmail);
    }else
    {
        ui->infoAlter->setText("服务器异常");
    }
}

void MainWindow::disposeAlterPhone(QString newPhone)
{
    ui->infoAlter->clear();
    DBManager::eDbStatus status = DbManager->DBAlterPhone(m_userinfo.getID(),newPhone);
    if(status == DBManager::DB_SUCCESS)
    {
        ui->infoAlter->setText("修改电话成功！");
        ui->infoPhone->setText(newPhone);
        m_userinfo.setPhone(newPhone);
    }else
    {
        ui->infoAlter->setText("服务器异常");
    }
}

//添加周报
void MainWindow::SlotAddDaily(QString Content, QString Problem, QString Solution, QString Nextplan)
{
    DailyInfo daillyInfo;
    daillyInfo.setUserID(m_userinfo.getID());
    daillyInfo.setName(m_userinfo.getName());
    daillyInfo.setDate(QDate::currentDate());
    daillyInfo.setContent(Content);
    daillyInfo.setProblem(Problem);
    daillyInfo.setSolution(Solution);
    daillyInfo.setNextPlan(Nextplan);
    DbManager->DBInsertReport(daillyInfo,0);
    QList<DailyInfo *> List;
    DbManager->DBGetDailyList(m_userinfo.getID(),List);
    addTableData(ui->tableDaily,List);
}

void MainWindow::SlotAddMonthly(QString Content, QString Problem, QString Solution, QString Nextplan)
{
    DailyInfo daillyInfo;
    daillyInfo.setUserID(m_userinfo.getID());
    daillyInfo.setName(m_userinfo.getName());
    daillyInfo.setDate(QDate::currentDate());
    daillyInfo.setContent(Content);
    daillyInfo.setProblem(Problem);
    daillyInfo.setSolution(Solution);
    daillyInfo.setNextPlan(Nextplan);
    DbManager->DBInsertReport(daillyInfo,1);
    QList<DailyInfo *> List;
    DbManager->DBGetMonthlyList(m_userinfo.getID(),List);
    addTableData(ui->tableMonthly,List);
}

void MainWindow::on_tableDaily_itemPressed(QTableWidgetItem *item)
{
    ui->dailyName->setText(ui->tableDaily->item(item->row(),0)->text());
    ui->dailyDate->setText(ui->tableDaily->item(item->row(),1)->text());
    ui->dailyContent->setText(ui->tableDaily->item(item->row(),2)->text());
    ui->dailyProblem->setText(ui->tableDaily->item(item->row(),3)->text());
    ui->dailySolution->setText(ui->tableDaily->item(item->row(),4)->text());
    ui->dailyNextplan->setText(ui->tableDaily->item(item->row(),5)->text());
}

void MainWindow::on_BtnDailySelection_clicked()
{
    ui->dailyName->clear();
    ui->dailyDate->clear();
    ui->dailyContent->clear();
    ui->dailyProblem->clear();
    ui->dailySolution->clear();
    ui->dailyNextplan->clear();
    ui->errorDaily->clear();

    QDate start,end;
    QString Name;
    start.setDate(ui->DailyStartYear->text().toInt(),ui->DailyStartMonth->text().toInt(),ui->DailyStartDay->text().toInt());
    end.setDate(ui->DailyEndYear->text().toInt(),ui->DailyEndMonth->text().toInt(),ui->DailyEndDay->text().toInt());
    if(m_userinfo.getPost() == "普通员工")
    {
        Name = this->m_userinfo.getName();
    }else
    {
        Name = ui->boxDaily->currentText();
    }

    //进行查询 并映射到表格中去
    QList<DailyInfo *> List;
    DbManager->DBSelectDailyList(Name,start,end,List);
    addTableData(ui->tableDaily,List);
    ui->errorDaily->setText("查询成功！");
}

void MainWindow::on_tableMonthly_itemPressed(QTableWidgetItem *item)
{
    ui->MonthlyName->setText(ui->tableMonthly->item(item->row(),0)->text());
    ui->MonthlyDate->setText(ui->tableMonthly->item(item->row(),1)->text());
    ui->MonthlyContent->setText(ui->tableMonthly->item(item->row(),2)->text());
    ui->MonthlyProblem->setText(ui->tableMonthly->item(item->row(),3)->text());
    ui->MonthlySolution->setText(ui->tableMonthly->item(item->row(),4)->text());
    ui->MonthlyNextplan->setText(ui->tableMonthly->item(item->row(),5)->text());
}

void MainWindow::on_BtnMonthlySelection_clicked()
{
    ui->MonthlyName->clear();
    ui->MonthlyDate->clear();
    ui->MonthlyContent->clear();
    ui->MonthlyProblem->clear();
    ui->MonthlySolution->clear();
    ui->MonthlyNextplan->clear();
    ui->errorMonthly->clear();

    QDate start,end;
    QString Name;
    start.setDate(ui->MonthlyStartYear->text().toInt(),ui->MonthlyStartMonth->text().toInt(),ui->MonthlyStartDay->text().toInt());
    end.setDate(ui->MonthlyEndYear->text().toInt(),ui->MonthlyEndMonth->text().toInt(),ui->MonthlyEndDay->text().toInt());
    if(m_userinfo.getPost() == "普通员工")
    {
        Name = this->m_userinfo.getName();
    }else
    {
        Name = ui->boxMonthly->currentText();
    }

    //进行查询 并映射到表格中去
    QList<DailyInfo *> List;
    DbManager->DBSelectMonthlyList(Name,start,end,List);
    addTableData(ui->tableMonthly,List);
    ui->errorMonthly->setText("查询成功！");
}

void MainWindow::MyProOperation()
{
    ui->errorMyProInfo->clear();

    QString head[6];
    head[0] = "项目名";
    head[1] = "项目创建时间";
    head[2] = "优先级";
    head[3] = "项目状态";
    head[4] = "项目预支";
    head[5] = "项目经理";
    int headWidth[6] ={200,80,50,80,80,100};
    //设置表格属性
    setTableWeight(ui->tableMyPro,6,head,headWidth);

    //获取数据
    MyProInfoList.clear();

    DbManager->DBGetMyProInfoList(m_userinfo.getID(),MyProInfoList);
    //在表格中显示数据
    addTableProInfoData(ui->tableMyPro,MyProInfoList);
}

void MainWindow::MyTaskOperation()
{
}

//表格点击操作
void MainWindow::on_tableProInfo_itemPressed(QTableWidgetItem *item)
{
    ui->BtnSetProRealStart->show();
    ui->BtnSetProRealEnd->show();
    QString proName = ui->tableProInfo->item(item->row(),0)->text();
    ProInfo *proinfo = NULL;
    QList<ProInfo *>::Iterator iter = ProInfoList.begin();
    for ( ; iter != ProInfoList.end(); iter++)  {
        if((*iter)->getName() == proName)
        {
            proinfo = *iter;
            break;
        }
    }
    ui->proName->setText(proinfo->getName());
    ui->proManager->setText(proinfo->getManager());
    ui->proCost->setText(QString::number(proinfo->getMoney()));
    ui->proClient->setText(proinfo->getClient());
    ui->proState->setText(proinfo->getState());
    ui->proAddress->setText(proinfo->getAddress());

    ui->proPriority->setCurrentIndex(proinfo->getPriority());

    ui->proDescribe->setText(proinfo->getDescribe());
    ui->createYear->setValue(proinfo->getCreate().year());
    ui->createMonth->setValue(proinfo->getCreate().month());
    ui->createDay->setValue(proinfo->getCreate().day());
    ui->planStartYear->setValue(proinfo->getPlanStart().year());
    ui->planStartMonth->setValue(proinfo->getPlanStart().month());
    ui->planStartDay->setValue(proinfo->getPlanStart().day());

    ui->planEndYear->setValue(proinfo->getPlanEnd().year());
    ui->planEndMonth->setValue(proinfo->getPlanEnd().month());
    ui->planEndDay->setValue(proinfo->getPlanEnd().day());



    ui->realStartYear->setValue(proinfo->getRealStart().year());
    ui->realStartMonth->setValue(proinfo->getRealStart().month());
    ui->realStartDay->setValue(proinfo->getRealStart().day());

    ui->realEndYear->setValue(proinfo->getRealEnd().year());
    ui->realEndMonth->setValue(proinfo->getRealEnd().month());
    ui->realEndDay->setValue(proinfo->getRealEnd().day());

}

void MainWindow::on_BtnProInfoManagerSelection_clicked()
{
    ui->BtnSetProRealStart->hide();
    ui->BtnSetProRealEnd->hide();
    ui->proName->clear();
    ui->proManager->clear();
    ui->proCost->clear();
    ui->proClient->clear();
    ui->proState->clear();
    ui->proDescribe->clear();
    ui->createYear->clear();
    ui->createMonth->clear();
    ui->createDay->clear();
    ui->planStartYear->clear();
    ui->planStartMonth->clear();
    ui->planStartDay->clear();
    ui->planEndYear->clear();
    ui->planEndMonth->clear();
    ui->planEndDay->clear();
    ui->realStartYear->clear();
    ui->realStartMonth->clear();
    ui->realStartDay->clear();
    ui->realEndYear->clear();
    ui->realEndMonth->clear();
    ui->realEndDay->clear();
    ui->proAddress->clear();


    QDate start,end;
    start.setDate(ui->ProInfoManagerStartYear->text().toInt(),ui->ProInfoManagerStartMonth->text().toInt(),ui->ProInfoManagerStartDay->text().toInt());
    end.setDate(ui->ProInfoManagerEndYear->text().toInt(),ui->ProInfoManagerEndMonth->text().toInt(),ui->ProInfoManagerEndDay->text().toInt());

    //进行查询 并映射到表格中去
    ProInfoList.clear();

    DbManager->DBSelectProInfoList(start,end,ProInfoList);
    addTableProInfoData(ui->tableProInfo,ProInfoList);
    ui->errorProInfoManager->setText("查询成功！");
}

void MainWindow::slotAddProInfoSuccess()
{
    ProInfoManageOperation();
}

void MainWindow::slotAddUserInfoSuccess()
{
    RoleManageOperation();
}

void MainWindow::on_tableMyPro_itemPressed(QTableWidgetItem *item)
{
    QString proName = ui->tableMyPro->item(item->row(),0)->text();
    ProInfo *proinfo = NULL;
    QList<ProInfo *>::Iterator iter = MyProInfoList.begin();
    for ( ; iter != MyProInfoList.end(); iter++)  {
        if((*iter)->getName() == proName)
        {
            proinfo = *iter;
            break;
        }
    }
    ui->MyProName->setText(proinfo->getName());
    ui->MyProManager->setText(proinfo->getManager());
    ui->MyProCost->setText(QString::number(proinfo->getMoney()));
    ui->MyProClient->setText(proinfo->getClient());
    ui->MyProState->setText(proinfo->getState());
    ui->MyProAddress->setText(proinfo->getAddress());

    ui->MyProPriority->setCurrentIndex(proinfo->getPriority());

    ui->MyProDescribe->setText(proinfo->getDescribe());
    ui->MyCreateYear->setValue(proinfo->getCreate().year());
    ui->MyCreateMonth->setValue(proinfo->getCreate().month());
    ui->MyCreateDay->setValue(proinfo->getCreate().day());
    ui->MyPlanStartYear->setValue(proinfo->getPlanStart().year());
    ui->MyPlanStartMonth->setValue(proinfo->getPlanStart().month());
    ui->MyPlanStartDay->setValue(proinfo->getPlanStart().day());

    ui->MyPlanEndYear->setValue(proinfo->getPlanEnd().year());
    ui->MyPlanEndMonth->setValue(proinfo->getPlanEnd().month());
    ui->MyPlanEndDay->setValue(proinfo->getPlanEnd().day());

    ui->MyRealStartYear->setValue(proinfo->getRealStart().year());
    ui->MyRealStartMonth->setValue(proinfo->getRealStart().month());
    ui->MyRealStartDay->setValue(proinfo->getRealStart().day());

    ui->MyRealEndYear->setValue(proinfo->getRealEnd().year());
    ui->MyRealEndMonth->setValue(proinfo->getRealEnd().month());
    ui->MyRealEndDay->setValue(proinfo->getRealEnd().day());
}

void MainWindow::on_BtnMyProSelection_clicked()
{
    ui->MyProName->clear();
    ui->MyProManager->clear();
    ui->MyProCost->clear();
    ui->MyProClient->clear();
    ui->MyProState->clear();
    ui->MyCreateYear->clear();
    ui->MyCreateMonth->clear();
    ui->MyCreateDay->clear();
    ui->MyPlanStartYear->clear();
    ui->MyPlanStartMonth->clear();
    ui->MyPlanStartDay->clear();
    ui->MyPlanEndYear->clear();
    ui->MyPlanEndMonth->clear();
    ui->MyPlanEndDay->clear();
    ui->MyRealStartYear->clear();
    ui->MyRealStartMonth->clear();
    ui->MyRealStartDay->clear();
    ui->MyRealEndYear->clear();
    ui->MyRealEndMonth->clear();
    ui->MyRealEndDay->clear();
    ui->MyProAddress->clear();
    ui->MyProDescribe->clear();

    QDate start,end;
    start.setDate(ui->MyProStartYear->text().toInt(),ui->MyProStartMonth->text().toInt(),ui->MyProStartDay->text().toInt());
    end.setDate(ui->MyProEndYear->text().toInt(),ui->MyProEndMonth->text().toInt(),ui->MyProEndDay->text().toInt());

    //进行查询 并映射到表格中去
    MyProInfoList.clear();

    DbManager->DBSelectMyProInfoList(m_userinfo.getID(), start,end,MyProInfoList);
    addTableProInfoData(ui->tableMyPro,MyProInfoList);
    ui->errorMyProInfo->setText("查询成功！");
}

void MainWindow::on_BtnSetProRealStart_clicked()
{

    QString proName = ui->proName->text();

    ProInfo *proinfo = NULL;
    QList<ProInfo *>::Iterator iter = ProInfoList.begin();
    for ( ; iter != ProInfoList.end(); iter++)  {

        if((*iter)->getName() == proName)
        {
            proinfo = *iter;
            break;
        }
    }
    QDate start;
    start.setDate(ui->realStartYear->text().toInt(),ui->realStartMonth->text().toInt(),ui->realStartDay->text().toInt());
    proinfo->setRealStart(start);
    //更新开始时间
    DbManager->DBUpdateRealTime(start,proinfo->getID(),0);
}

void MainWindow::on_BtnSetProRealEnd_clicked()
{
    QString proName = ui->proName->text();
    ProInfo *proinfo = NULL;
    QList<ProInfo *>::Iterator iter = ProInfoList.begin();
    for ( ; iter != ProInfoList.end(); iter++)  {

        if((*iter)->getName() == proName)
        {
            proinfo = *iter;
            break;
        }
    }
    QDate end;
    end.setDate(ui->realEndYear->text().toInt(),ui->realEndMonth->text().toInt(),ui->realEndDay->text().toInt());
    proinfo->setRealEnd(end);
    //更新结束时间
    DbManager->DBUpdateRealTime(end,proinfo->getID(),1);

}

void MainWindow::on_tableLogin_itemPressed(QTableWidgetItem *item)
{
    QString ID = ui->tableLogin->item(item->row(),0)->text();
    userInfo *userinfo = NULL;
    QList<userInfo *>::Iterator iter = LoginUserInfoList.begin();
    for ( ; iter != LoginUserInfoList.end(); iter++)  {
        if((*iter)->getID() == ID)
        {
            userinfo = *iter;
            break;
        }
    }
    ui->infoAccount_2->setText(userinfo->getID());
    ui->infoAddress_2->setText(userinfo->getAddress());
    ui->infoBirthday_2->setText(userinfo->getBirthday().toString(Qt::ISODate));
    ui->infoBirthPlace_2->setText(userinfo->getBirthPlace());
    ui->infoEmail_2->setText(userinfo->getEmail());
    ui->infoGraduation_2->setText(userinfo->getGraduation());
    ui->infoName_2->setText(userinfo->getName());
    ui->infoPhone_2->setText(userinfo->getPhone());
    ui->infoPost_2->setText(userinfo->getPost());
    ui->infoRemark_2->setText(userinfo->getRemark());
    ui->infoSex_2->setText(userinfo->getSex());
    ui->infoWorkyears_2->setNum(userinfo->getWorkYears());

}

void MainWindow::on_tableRole_itemPressed(QTableWidgetItem *item)
{
    QString ID = ui->tableRole->item(item->row(),0)->text();
    userInfo *userinfo = NULL;
    QList<userInfo *>::Iterator iter = AllUserInfoList.begin();
    for ( ; iter != AllUserInfoList.end(); iter++)  {
        if((*iter)->getID() == ID)
        {
            userinfo = *iter;
            break;
        }
    }
    ui->infoAccount_3->setText(userinfo->getID());
    ui->infoAddress_3->setText(userinfo->getAddress());
    ui->infoBirthday_3->setText(userinfo->getBirthday().toString(Qt::ISODate));
    ui->infoBirthPlace_3->setText(userinfo->getBirthPlace());
    ui->infoEmail_3->setText(userinfo->getEmail());
    ui->infoGraduation_3->setText(userinfo->getGraduation());
    ui->infoName_3->setText(userinfo->getName());
    ui->infoPhone_3->setText(userinfo->getPhone());
    ui->infoPost_3->setText(userinfo->getPost());
    ui->infoRemark_3->setText(userinfo->getRemark());
    ui->infoSex_3->setText(userinfo->getSex());
    ui->infoWorkyears_3->setNum(userinfo->getWorkYears());
}

void MainWindow::on_BtnRoleManagerSelection_clicked()
{
    ui->infoAccount_3->clear();
    ui->infoAddress_3->clear();
    ui->infoBirthday_3->clear();
    ui->infoBirthPlace_3->clear();
    ui->infoEmail_3->clear();
    ui->infoGraduation_3->clear();
    ui->infoName_3->clear();
    ui->infoPhone_3->clear();
    ui->infoPost_3->clear();
    ui->infoRemark_3->clear();
    ui->infoSex_3->clear();
    ui->infoWorkyears_3->clear();


    QString select;
    select = ui->roleCombo->currentText();
    AllUserInfoList.clear();
    if(select == "所有人员")
    {
        //进行查询 并映射到表格中去
        DbManager->DBGetLoginUserInfo(AllUserInfoList,1);
    }else
    {
        DbManager->DBSelsctUserInfoByPro(select,AllUserInfoList);
    }
    addTableLoginUserInfoData(ui->tableRole,AllUserInfoList);
    ui->roleinfo->setText("查询成功！");
}

void MainWindow::on_tablePerm_itemPressed(QTableWidgetItem *item)
{
    QString ID = ui->tablePerm->item(item->row(),0)->text();
    userInfo *userinfo = NULL;
    QList<userInfo *>::Iterator iter = AllUserInfoList.begin();
    for ( ; iter != AllUserInfoList.end(); iter++)  {
        if((*iter)->getID() == ID)
        {
            userinfo = *iter;
            break;
        }
    }
    ui->infoAccount_7->setText(userinfo->getID());
    ui->infoName_7->setText(userinfo->getName());
    ui->myProject->setChecked(userinfo->getPerm_myProject());
    ui->myTask->setChecked(userinfo->getPerm_myTask());
    ui->setinfo->setChecked(userinfo->getPerm_setInfo());
    ui->proInfoManage->setChecked(userinfo->getPerm_proInfoManage());
    ui->proStaffManage->setChecked(userinfo->getPerm_proStaffManage());
    ui->CostManage->setChecked(userinfo->getPerm_CostManage());
    ui->RequireTaskManage->setChecked(userinfo->getPerm_RequireTaskManage());
    ui->PlanManage->setChecked(userinfo->getPerm_PlanManage());
    ui->WeeklyReports->setChecked(userinfo->getPerm_WeeklyReports());
    ui->MonthlyReports->setChecked(userinfo->getPerm_MonthlyReports());
    ui->RoleManage->setChecked(userinfo->getPerm_RoleManage());
    ui->LoginUser->setChecked(userinfo->getPerm_LoginUser());
    ui->PermManage->setChecked(userinfo->getPerm_PermManage());

}

void MainWindow::on_BtnChangePerm_clicked()
{
    QString ID = ui->infoAccount_7->text();
    userInfo *userinfo = NULL;
    QList<userInfo *>::Iterator iter = AllUserInfoList.begin();
    for ( ; iter != AllUserInfoList.end(); iter++)  {
        if((*iter)->getID() == ID)
        {
            userinfo = *iter;
            break;
        }
    }
    userinfo->setPerm_myProject(ui->myProject->isChecked());
    userinfo->setPerm_myTask(ui->myTask->isChecked());
    userinfo->setPerm_setInfo(ui->setinfo->isChecked());
    userinfo->setPerm_proInfoManage(ui->proInfoManage->isChecked());
    userinfo->setPerm_proStaffManage(ui->proStaffManage->isChecked());
    userinfo->setPerm_CostManage(ui->CostManage->isChecked());
    userinfo->setPerm_RequireTaskManage(ui->RequireTaskManage->isChecked());
    userinfo->setPerm_PlanManage(ui->PlanManage->isChecked());
    userinfo->setPerm_WeeklyReports(ui->WeeklyReports->isChecked());
    userinfo->setPerm_MonthlyReports(ui->MonthlyReports->isChecked());
    userinfo->setPerm_RoleManage(ui->RoleManage->isChecked());
    userinfo->setPerm_LoginUser(ui->LoginUser->isChecked());
    userinfo->setPerm_PermManage(ui->PermManage->isChecked());

    DbManager->DBUpdatePerm(*userinfo);
    ui->perminfo->setText("改变权限成功！");

}
