#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbmanager.h>
#include <QPoint>
#include <QTreeWidgetItem>
#include "userinfo.h"
#include <QTableWidget>
#include "dailyinfo.h"
#include "proinfo.h"
#include "prostaffinfo.h"
#include "procost.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(DBManager *DbManager,QString  UserID,QWidget *parent = 0);
    ~MainWindow();


    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
private:
    DBManager *DbManager;
    QPoint dragPosition;
    userInfo m_userinfo;
private:
    Ui::MainWindow *ui;
    void getUserInfo(QString  UserID);
signals:
    //选择对应的stackedWidget
    void SigSelectStackedWidget(int);
    void SigAlterPassword(bool);
public slots:
    void SlotTreeWidgetClick(QTreeWidgetItem * item);

private slots:
    void on_BtnLoginOutSystem_clicked();
    void on_BtnReLogin_clicked();
    void on_BtnClose_clicked();
    void on_btnAddDaily_clicked();
    void on_BtnAddPro_clicked();
    void on_pushButton_clicked();
    void on_BtnAddUser_clicked();

    void on_BtnAlterPassword_clicked();

    void on_BtnAlterPhone_clicked();

    void on_BtnAlterEmail_clicked();

    void on_BtnAlterAddress_clicked();

    void disposeAlterPassword(QString newpassword);
    void disposeAlterAddress(QString newAddress);
    void disposeAlterEmail(QString newEmail);
    void disposeAlterPhone(QString newPhone);
    void SlotAddDaily(QString Content,QString Problem,QString Solution,QString Nextplan);
    void SlotAddMonthly(QString Content,QString Problem,QString Solution,QString Nextplan);

    void on_tableDaily_itemPressed(QTableWidgetItem *item);
    void on_tableMonthly_itemPressed(QTableWidgetItem *item);



    void on_BtnDailySelection_clicked();
    void on_BtnMonthlySelection_clicked();

    void on_tableProInfo_itemPressed(QTableWidgetItem *item);

    void on_BtnProInfoManagerSelection_clicked();



    void slotAddProInfoSuccess();
    void slotAddUserInfoSuccess();
    void slotAddProStaffInfoSuccess();
    void slotAddProCostInfoSuccess();

    void on_tableMyPro_itemPressed(QTableWidgetItem *item);

    void on_BtnMyProSelection_clicked();

    void on_BtnSetProRealStart_clicked();

    void on_BtnSetProRealEnd_clicked();

    void on_tableLogin_itemPressed(QTableWidgetItem *item);

    void on_tableRole_itemPressed(QTableWidgetItem *item);

    void on_BtnRoleManagerSelection_clicked();

    void on_tablePerm_itemPressed(QTableWidgetItem *item);

    void on_BtnChangePerm_clicked();

    void on_BtnProStaffManagerSelection_clicked();

    void on_BtnAddProStaff_clicked();

    void on_tableProStaff_itemPressed(QTableWidgetItem *item);

    void on_tableProCost_itemPressed(QTableWidgetItem *item);

    void on_BtnCostManagerSelection_clicked();

    void on_BtnAddProCost_clicked();

    void on_BtnAddProTask_clicked();

    void on_BtnAddProProcess_clicked();

    void on_BtnRequestManagerSelection_clicked();

private:
    //点击我的项目的操作
    void MyProOperation();
    //点击我的任务的操作
    void MyTaskOperation();
    //点击各个标签的操作
    void PersonalInfoOperation();


    //点击项目信息管理操作
    void ProInfoManageOperation();
    //点击项目人员管理的操作
    void ProStaffManageOperation();
    //点击成本管理的操作
    void ProCostManageOperation();
    //点击需求管理操作
    void ProRequestManageOperation();
    //点击任务管理操作
    void ProTaskManageOperation();
    //点击进度管理操作
    void ProProcessManageOperation();
    //点击周报操作
    void DailyOperation();
    //点击月报操作
    void MonthlyOperation();

    //点击角色管理操作
    void RoleManageOperation();
    //点击登入用户操作
    void LoginUserManageOperation();
    //点击权限管理操作
    void PermManageOperation();

    //设置表格
    void setTableWeight(QTableWidget *table,int row,QString head[20],int width[20]);
    //为表格添加周报月报数据
    void addTableData(QTableWidget *table,QList<DailyInfo *> &List);
    //为表格添加项目信息
    void addTableProInfoData(QTableWidget *table,QList<ProInfo *> &List);
    //为表格添加在线用户信息
    void addTableLoginUserInfoData(QTableWidget *table,QList<userInfo *> &List);
    //为表格添加项目员工信息
    void addTableProStaffInfoData(QTableWidget *table,QList<proStaffInfo *> &List);
    void addTableProCostInfoData(QTableWidget *table,QList<proCost *> &List);

    void initialize();


private:
    QList<ProInfo *> ProInfoList;
    QList<ProInfo *> MyProInfoList;
    QList<userInfo *> LoginUserInfoList;
    QList<userInfo *> AllUserInfoList;
    QList<proStaffInfo *> proStaffList;
    QList<proCost *> proCostList;

};

#endif // MAINWINDOW_H
