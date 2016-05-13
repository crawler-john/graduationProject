/********************************************************************************
** Form generated from reading UI file 'addrequest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREQUEST_H
#define UI_ADDREQUEST_H

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

class Ui_addRequest
{
public:
    QLabel *label_12;
    QComboBox *proManager_2;
    QTextEdit *proDescribe;
    QLabel *label_11;
    QLabel *label_7;
    QPushButton *BtnCancel;
    QSpinBox *createMonth;
    QPushButton *BtnConfirm;
    QLabel *dailyInfo;
    QLabel *label_90;
    QSpinBox *createtYear;
    QLabel *label_2;
    QSpinBox *createDay;
    QLabel *label_8;
    QLabel *label_89;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *proClient;
    QComboBox *proManager_3;
    QComboBox *proManager_4;
    QComboBox *proManager_5;

    void setupUi(QDialog *addRequest)
    {
        if (addRequest->objectName().isEmpty())
            addRequest->setObjectName(QStringLiteral("addRequest"));
        addRequest->resize(379, 353);
        addRequest->setStyleSheet(QLatin1String("QDialog#addRequest{\n"
"	background-image:url(img/addRequest.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        label_12 = new QLabel(addRequest);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 116, 141, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        proManager_2 = new QComboBox(addRequest);
        proManager_2->setObjectName(QStringLiteral("proManager_2"));
        proManager_2->setGeometry(QRect(96, 78, 261, 22));
        proDescribe = new QTextEdit(addRequest);
        proDescribe->setObjectName(QStringLiteral("proDescribe"));
        proDescribe->setGeometry(QRect(106, 230, 261, 71));
        label_11 = new QLabel(addRequest);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 206, 121, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_7 = new QLabel(addRequest);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 146, 101, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        BtnCancel = new QPushButton(addRequest);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 320, 61, 23));
        createMonth = new QSpinBox(addRequest);
        createMonth->setObjectName(QStringLiteral("createMonth"));
        createMonth->setGeometry(QRect(240, 112, 42, 22));
        BtnConfirm = new QPushButton(addRequest);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 320, 61, 23));
        dailyInfo = new QLabel(addRequest);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(20, 320, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        label_90 = new QLabel(addRequest);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(283, 116, 16, 16));
        createtYear = new QSpinBox(addRequest);
        createtYear->setObjectName(QStringLiteral("createtYear"));
        createtYear->setGeometry(QRect(175, 112, 61, 22));
        label_2 = new QLabel(addRequest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        createDay = new QSpinBox(addRequest);
        createDay->setObjectName(QStringLiteral("createDay"));
        createDay->setGeometry(QRect(290, 112, 42, 22));
        label_8 = new QLabel(addRequest);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 176, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_89 = new QLabel(addRequest);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(235, 116, 16, 16));
        label_3 = new QLabel(addRequest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 230, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label = new QLabel(addRequest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        proClient = new QLineEdit(addRequest);
        proClient->setObjectName(QStringLiteral("proClient"));
        proClient->setGeometry(QRect(100, 50, 151, 20));
        proManager_3 = new QComboBox(addRequest);
        proManager_3->setObjectName(QStringLiteral("proManager_3"));
        proManager_3->setGeometry(QRect(113, 144, 151, 22));
        proManager_4 = new QComboBox(addRequest);
        proManager_4->setObjectName(QStringLiteral("proManager_4"));
        proManager_4->setGeometry(QRect(141, 175, 141, 22));
        proManager_5 = new QComboBox(addRequest);
        proManager_5->setObjectName(QStringLiteral("proManager_5"));
        proManager_5->setGeometry(QRect(140, 205, 141, 22));

        retranslateUi(addRequest);

        QMetaObject::connectSlotsByName(addRequest);
    } // setupUi

    void retranslateUi(QDialog *addRequest)
    {
        addRequest->setWindowTitle(QApplication::translate("addRequest", "Dialog", 0));
        label_12->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", 0));
        label_11->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\275\223\345\211\215\350\277\233\345\272\246\357\274\232", 0));
        label_7->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\347\261\273\345\236\213\357\274\232", 0));
        BtnCancel->setText(QApplication::translate("addRequest", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("addRequest", "\347\241\256\345\256\232", 0));
        dailyInfo->setText(QString());
        label_90->setText(QApplication::translate("addRequest", "-", 0));
        label_2->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\220\215\357\274\232", 0));
        label_8->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232", 0));
        label_89->setText(QApplication::translate("addRequest", "-", 0));
        label_3->setText(QApplication::translate("addRequest", "\350\277\233\345\272\246\346\217\217\350\277\260\357\274\232", 0));
        label->setText(QApplication::translate("addRequest", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addRequest: public Ui_addRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREQUEST_H
