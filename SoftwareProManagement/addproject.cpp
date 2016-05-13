#include "addproject.h"
#include "ui_addproject.h"
#include <QMouseEvent>

AddProject::AddProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProject)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->createYear->setRange(2010,2050);
    ui->createMonth->setRange(1,12);
    ui->createDay->setRange(1,31);
    ui->planStartYear->setRange(2010,2050);
    ui->planStartMonth->setRange(1,12);
    ui->planStartDay->setRange(1,31);

    ui->planEndYear->setRange(2010,2050);
    ui->planEndMonth->setRange(1,12);
    ui->planEndDay->setRange(1,31);

    ui->realStartYear->setRange(2010,2050);
    ui->realStartMonth->setRange(1,12);
    ui->realStartDay->setRange(1,31);

    ui->realEndYear->setRange(2010,2050);
    ui->realEndMonth->setRange(1,12);
    ui->realEndDay->setRange(1,31);

    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));

}

AddProject::~AddProject()
{
    delete ui;
}

void AddProject::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AddProject::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
