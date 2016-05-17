#include "monthly.h"
#include "ui_monthly.h"
#include <QMouseEvent>

Monthly::Monthly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monthly)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(this,SIGNAL(rejected()),this,SLOT(close()));
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    setWindowTitle("月报");
}

Monthly::~Monthly()
{
    delete ui;
}

void Monthly::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void Monthly::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void Monthly::on_BtnConfirm_clicked()
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
        emit SigAddMonthly(Content,Problem,Solution,Nextplan);
        ui->dailyInfo->setText("添加周报成功！");
    }
}
