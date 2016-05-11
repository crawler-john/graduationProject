#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbmanager.h>
#include <QPoint>
#include <QTreeWidgetItem>
#include "userinfo.h"
#include <QTableWidget>
#include "dailyinfo.h"
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


    void on_tableDaily_itemPressed(QTableWidgetItem *item);

    void on_BtnDailySelection_clicked();

private:
    //点击各个标签的操作
    void PersonalInfoOperation();
    void DailyOperation();


    //设置表格
    void setTableWeight(QTableWidget *table,int row,QString head[20],int width[20]);
    void addTableDailyData(QTableWidget *table,QList<DailyInfo *> &List);



    void initialize();
};

#endif // MAINWINDOW_H
