#include "addrequest.h"
#include "ui_addrequest.h"

addRequest::addRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRequest)
{
    ui->setupUi(this);
}

addRequest::~addRequest()
{
    delete ui;
}
