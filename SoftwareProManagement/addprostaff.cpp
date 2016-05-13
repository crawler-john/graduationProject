#include "addprostaff.h"
#include "ui_addprostaff.h"

addProStaff::addProStaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProStaff)
{
    ui->setupUi(this);
}

addProStaff::~addProStaff()
{
    delete ui;
}
