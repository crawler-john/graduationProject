#include "daily.h"
#include "ui_daily.h"
#include <QMouseEvent>

Daily::Daily(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Daily)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
}

Daily::~Daily()
{
    delete ui;
}

void Daily::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}


void Daily::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}




void Daily::on_BtnConfirm_clicked()
{
    QString Content = ui->content->toPlainText().replace("\"","\\");
    QString Problem = ui->problem->toPlainText().replace("\"","\\");
    QString Solution = ui->solution->toPlainText().replace("\"","\\");
    QString Nextplan = ui->plan->toPlainText().replace("\"","\\");
    if(Content.isEmpty() || Problem.isEmpty() || Solution.isEmpty() || Nextplan.isEmpty())
    {
        ui->dailyInfo->setText("输入内容不能为空");
    }else
    {
        emit SigAddDaily(Content,Problem,Solution,Nextplan);
        ui->dailyInfo->setText("添加周报成功！");
    }

}
