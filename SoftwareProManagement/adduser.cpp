#include "adduser.h"
#include "ui_adduser.h"
#include <QMouseEvent>
#include "userinfo.h"

AddUser::AddUser(DBManager *DbManager,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUser)
{
    m_DbManager = DbManager;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->BtnCancel,SIGNAL(clicked()),this,SLOT(close()));
    ui->Year->setRange(1900,QDate::currentDate().year());
    ui->Month->setRange(1,12);
    ui->Day->setRange(1,31);

}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
}

void AddUser::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void AddUser::on_BtnConfirm_clicked()
{
    if((ui->ID->text().isEmpty()) || (ui->Name->text().isEmpty()) || (ui->Password->text().isEmpty()) || (ui->Phone->text().isEmpty()) || (ui->birthplace->text().isEmpty()) || (ui->Graduation->text().isEmpty()) || (ui->Email->text().isEmpty()) || (ui->mark->toPlainText().isEmpty()) || (ui->Address->text().isEmpty()))
    {
        ui->Info->setText("输入信息不完全！");
    }else
    {
        userInfo userinfo;
        QDate birthday;
        birthday.setDate(ui->Year->value(),ui->Month->value(),ui->Day->value());
        userinfo.setID(ui->ID->text());
        userinfo.setName(ui->Name->text());
        userinfo.setPassword(ui->Password->text());
        userinfo.setPost(ui->Post->currentText());
        userinfo.setSex(ui->Sex->currentText());
        userinfo.setBirthday(birthday);
        userinfo.setPhone(ui->Phone->text());
        userinfo.setWorkYears(ui->workYears->value());
        userinfo.setBirthPlace(ui->birthplace->text());
        userinfo.setGraduation(ui->Graduation->text());
        userinfo.setEmail(ui->Email->text());
        userinfo.setRemark(ui->mark->toPlainText().replace("\"","\\\""));
        userinfo.setAddress(ui->Address->text());

        userinfo.setPerm(userinfo.getPost());

        m_DbManager->DBInsertUser(userinfo);
        ui->Info->setText("添加项目成功！");
        emit sigAddUserInfoSuccess();
    }


}
