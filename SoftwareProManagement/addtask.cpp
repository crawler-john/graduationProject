#include "addtask.h"
#include "ui_addtask.h"

addTask::addTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTask)
{
    ui->setupUi(this);
}

addTask::~addTask()
{
    delete ui;
}
