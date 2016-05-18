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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addRequest
{
public:
    QComboBox *proName;
    QTextEdit *Describe;
    QLabel *label_7;
    QPushButton *BtnCancel;
    QPushButton *BtnConfirm;
    QLabel *dailyInfo;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *requestName;
    QComboBox *requestType;
    QComboBox *requestState;
    QLabel *Info;

    void setupUi(QDialog *addRequest)
    {
        if (addRequest->objectName().isEmpty())
            addRequest->setObjectName(QStringLiteral("addRequest"));
        addRequest->resize(379, 318);
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
        proName = new QComboBox(addRequest);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(96, 78, 261, 22));
        Describe = new QTextEdit(addRequest);
        Describe->setObjectName(QStringLiteral("Describe"));
        Describe->setGeometry(QRect(106, 180, 261, 71));
        label_7 = new QLabel(addRequest);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 116, 101, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        BtnCancel = new QPushButton(addRequest);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 270, 61, 23));
        BtnConfirm = new QPushButton(addRequest);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 270, 61, 23));
        dailyInfo = new QLabel(addRequest);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(20, 290, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        label_2 = new QLabel(addRequest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_8 = new QLabel(addRequest);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 146, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_3 = new QLabel(addRequest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label = new QLabel(addRequest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        requestName = new QLineEdit(addRequest);
        requestName->setObjectName(QStringLiteral("requestName"));
        requestName->setGeometry(QRect(100, 50, 151, 20));
        requestType = new QComboBox(addRequest);
        requestType->setObjectName(QStringLiteral("requestType"));
        requestType->setGeometry(QRect(113, 114, 151, 22));
        requestState = new QComboBox(addRequest);
        requestState->setObjectName(QStringLiteral("requestState"));
        requestState->setGeometry(QRect(141, 145, 141, 22));
        Info = new QLabel(addRequest);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(30, 270, 161, 21));
        Info->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));

        retranslateUi(addRequest);

        QMetaObject::connectSlotsByName(addRequest);
    } // setupUi

    void retranslateUi(QDialog *addRequest)
    {
        addRequest->setWindowTitle(QApplication::translate("addRequest", "Dialog", 0));
        label_7->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\347\261\273\345\236\213\357\274\232", 0));
        BtnCancel->setText(QApplication::translate("addRequest", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("addRequest", "\347\241\256\345\256\232", 0));
        dailyInfo->setText(QString());
        label_2->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\220\215\357\274\232", 0));
        label_8->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232", 0));
        label_3->setText(QApplication::translate("addRequest", "\351\234\200\346\261\202\346\217\217\350\277\260\357\274\232", 0));
        label->setText(QApplication::translate("addRequest", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        requestType->clear();
        requestType->insertItems(0, QStringList()
         << QApplication::translate("addRequest", "\345\212\237\350\203\275\346\200\247\351\234\200\346\261\202", 0)
         << QApplication::translate("addRequest", "\351\235\236\345\212\237\350\203\275\346\200\247\351\234\200\346\261\202", 0)
        );
        requestState->clear();
        requestState->insertItems(0, QStringList()
         << QApplication::translate("addRequest", "\346\234\252\345\256\214\346\210\220", 0)
         << QApplication::translate("addRequest", "\345\267\262\345\256\214\346\210\220", 0)
        );
        Info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addRequest: public Ui_addRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREQUEST_H
