#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include "daily.h"
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

    getUserInfo(UserID);

}
void MainWindow::getUserInfo(QString  UserID)
{
    DbManager->DBGetUserInfo(UserID,this->m_userinfo);
    ui->label_username->setText(m_userinfo.getName());
    //设置登录
    DbManager->DBSetLoginFlag(m_userinfo.getID(),true);
    //设置权限相关的内容
    if((!m_userinfo.getPerm_myProject() && !m_userinfo.getPerm_myTask()))
    {
        ui->treeWidget->topLevelItem(0)->setHidden(true);
    }
    ui->treeWidget->topLevelItem(0)->child(0)->setHidden(!m_userinfo.getPerm_myProject());
    ui->treeWidget->topLevelItem(0)->child(1)->setHidden(!m_userinfo.getPerm_myTask());
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
    ui->treeWidget->topLevelItem(1)->child(4)->setHidden(!m_userinfo.getPerm_PlanManage());
    ui->treeWidget->topLevelItem(1)->child(5)->setHidden(!m_userinfo.getPerm_WeeklyReports());
    ui->treeWidget->topLevelItem(1)->child(6)->setHidden(!m_userinfo.getPerm_MonthlyReports());
    if((!m_userinfo.getPerm_OrganManage() && !m_userinfo.getPerm_StaffManage() && !m_userinfo.getPerm_StaffManage()
            && !m_userinfo.getPerm_LoginUser() && !m_userinfo.getPerm_PermManage()))
    {
        ui->treeWidget->topLevelItem(2)->setHidden(true);
    }
    ui->treeWidget->topLevelItem(2)->child(0)->setHidden(!m_userinfo.getPerm_OrganManage());
    ui->treeWidget->topLevelItem(2)->child(1)->setHidden(!m_userinfo.getPerm_StaffManage());
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
        break;
    case 1:
        emit SigSelectStackedWidget(col+3);
        break;
    case 2:
        emit SigSelectStackedWidget(col+10);
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
    daily->exec();
    delete daily;
}
