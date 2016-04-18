#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>

MainWindow::MainWindow(DBManager *DbManager,QString  UserID,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->DbManager = DbManager;
    setWindowFlags(Qt::FramelessWindowHint);
    connect(this,SIGNAL(SigSelectStackedWidget(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(ui->treeWidget,SIGNAL(itemClicked(QTreeWidgetItem*,int)),this,SLOT(SlotTreeWidgetClick(QTreeWidgetItem*,int)));
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
    //设置权限相关的内容


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



void MainWindow::SlotTreeWidgetClick(QTreeWidgetItem * item, int column)
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
    qDebug() << "退出登录槽函数";
}
//重新登录槽函数
void MainWindow::on_BtnReLogin_clicked()
{
    qDebug() << "重新登录槽函数";
}

void MainWindow::on_BtnClose_clicked()
{
    qDebug() << "退出登录槽函数";
    close();
}
