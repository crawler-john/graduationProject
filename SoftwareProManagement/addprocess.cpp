#include "addprocess.h"
#include "ui_addprocess.h"

addProcess::addProcess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProcess)
{
    ui->setupUi(this);
}

addProcess::~addProcess()
{
    delete ui;
}
