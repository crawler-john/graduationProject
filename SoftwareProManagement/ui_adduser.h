/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QPushButton *BtnConfirm;
    QLabel *dailyInfo;
    QPushButton *BtnCancel;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QTextEdit *textEdit;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(379, 400);
        AddUser->setStyleSheet(QLatin1String("QDialog#AddUser{\n"
"	background-image:url(img/addUser.jpg);\n"
"}"));
        BtnConfirm = new QPushButton(AddUser);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(230, 370, 61, 23));
        dailyInfo = new QLabel(AddUser);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(30, 365, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        BtnCancel = new QPushButton(AddUser);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(300, 370, 61, 23));
        label = new QLabel(AddUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_5 = new QLabel(AddUser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(201, 50, 41, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_6 = new QLabel(AddUser);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(201, 80, 41, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_2 = new QLabel(AddUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_4 = new QLabel(AddUser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_7 = new QLabel(AddUser);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 71, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_8 = new QLabel(AddUser);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 170, 71, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_9 = new QLabel(AddUser);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 200, 71, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_10 = new QLabel(AddUser);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 230, 71, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_11 = new QLabel(AddUser);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 110, 41, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_12 = new QLabel(AddUser);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 260, 41, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_13 = new QLabel(AddUser);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 290, 51, 16));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_14 = new QLabel(AddUser);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(200, 140, 81, 16));
        label_14->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(AddUser);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 50, 113, 20));
        lineEdit_2 = new QLineEdit(AddUser);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 80, 91, 20));
        comboBox = new QComboBox(AddUser);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 109, 91, 22));
        lineEdit_3 = new QLineEdit(AddUser);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 50, 113, 20));
        lineEdit_4 = new QLineEdit(AddUser);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(250, 110, 113, 20));
        comboBox_2 = new QComboBox(AddUser);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(250, 80, 111, 22));
        spinBox = new QSpinBox(AddUser);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(280, 137, 42, 22));
        lineEdit_5 = new QLineEdit(AddUser);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 170, 231, 20));
        lineEdit_6 = new QLineEdit(AddUser);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 200, 231, 20));
        lineEdit_7 = new QLineEdit(AddUser);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 230, 111, 20));
        lineEdit_8 = new QLineEdit(AddUser);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(80, 260, 261, 20));
        textEdit = new QTextEdit(AddUser);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 290, 261, 61));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "Dialog", 0));
        BtnConfirm->setText(QApplication::translate("AddUser", "\347\241\256\345\256\232", 0));
        dailyInfo->setText(QString());
        BtnCancel->setText(QApplication::translate("AddUser", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("AddUser", "ID\357\274\232", 0));
        label_5->setText(QApplication::translate("AddUser", "\345\247\223\345\220\215\357\274\232", 0));
        label_6->setText(QApplication::translate("AddUser", "\350\201\214\344\275\215\357\274\232", 0));
        label_2->setText(QApplication::translate("AddUser", "\345\210\235\345\247\213\345\257\206\347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("AddUser", "\346\200\247\345\210\253\357\274\232", 0));
        label_7->setText(QApplication::translate("AddUser", "\347\224\237\346\227\245\357\274\232", 0));
        label_8->setText(QApplication::translate("AddUser", "\345\207\272\347\224\237\345\234\260\357\274\232", 0));
        label_9->setText(QApplication::translate("AddUser", "\346\257\225\344\270\232\351\231\242\346\240\241\357\274\232", 0));
        label_10->setText(QApplication::translate("AddUser", "\347\224\265\345\255\220\351\202\256\344\273\266\357\274\232", 0));
        label_11->setText(QApplication::translate("AddUser", "\347\224\265\350\257\235\357\274\232", 0));
        label_12->setText(QApplication::translate("AddUser", "\345\234\260\345\235\200\357\274\232", 0));
        label_13->setText(QApplication::translate("AddUser", "\345\244\207\346\263\250\357\274\232", 0));
        label_14->setText(QApplication::translate("AddUser", "\345\267\245\344\275\234\345\271\264\351\231\220\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
