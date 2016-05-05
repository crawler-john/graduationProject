#include "monthly.h"
#include "ui_monthly.h"

Monthly::Monthly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monthly)
{
    ui->setupUi(this);
}

Monthly::~Monthly()
{
    delete ui;
}
