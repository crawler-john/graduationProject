/********************************************************************************
** Form generated from reading UI file 'monthly.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLY_H
#define UI_MONTHLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Monthly
{
public:
    QLabel *label;
    QTextEdit *problem;
    QTextEdit *solution;
    QTextEdit *content;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *plan;
    QPushButton *BtnConfirm;
    QPushButton *BtnCancel;
    QLabel *dailyInfo;

    void setupUi(QDialog *Monthly)
    {
        if (Monthly->objectName().isEmpty())
            Monthly->setObjectName(QStringLiteral("Monthly"));
        Monthly->resize(400, 337);
        Monthly->setStyleSheet(QLatin1String("QDialog#Monthly{\n"
"	\n"
"	background-image:url(img/monthly.jpg);\n"
"}"));
        label = new QLabel(Monthly);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        problem = new QTextEdit(Monthly);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setGeometry(QRect(150, 130, 221, 41));
        problem->setStyleSheet(QLatin1String("QTextEdit#problem{\n"
"	background-color:rgb(235,199,255);\n"
"}  "));
        solution = new QTextEdit(Monthly);
        solution->setObjectName(QStringLiteral("solution"));
        solution->setGeometry(QRect(150, 180, 221, 41));
        solution->setStyleSheet(QLatin1String("QTextEdit#solution{\n"
"	\n"
"	background-color:rgb(235,199,255);\n"
"}  "));
        content = new QTextEdit(Monthly);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(150, 60, 221, 61));
        content->setStyleSheet(QLatin1String("QTextEdit#content{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
""));
        label_4 = new QLabel(Monthly);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 230, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        label_3 = new QLabel(Monthly);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        label_2 = new QLabel(Monthly);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        plan = new QTextEdit(Monthly);
        plan->setObjectName(QStringLiteral("plan"));
        plan->setGeometry(QRect(150, 230, 221, 41));
        plan->setStyleSheet(QLatin1String("QTextEdit#plan{\n"
"	\n"
"	background-color:rgb(235,199,255);\n"
"}  "));
        BtnConfirm = new QPushButton(Monthly);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 295, 61, 23));
        BtnCancel = new QPushButton(Monthly);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 295, 61, 23));
        dailyInfo = new QLabel(Monthly);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(40, 290, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));

        retranslateUi(Monthly);

        QMetaObject::connectSlotsByName(Monthly);
    } // setupUi

    void retranslateUi(QDialog *Monthly)
    {
        Monthly->setWindowTitle(QApplication::translate("Monthly", "Dialog", 0));
        label->setText(QApplication::translate("Monthly", "\346\234\254\346\234\210\345\256\214\346\210\220\345\206\205\345\256\271\357\274\232", 0));
        label_4->setText(QApplication::translate("Monthly", "\344\270\213  \345\221\250  \350\256\241  \345\210\222:", 0));
        label_3->setText(QApplication::translate("Monthly", "\351\227\256\351\242\230\350\247\243\345\206\263\346\226\271\346\241\210:", 0));
        label_2->setText(QApplication::translate("Monthly", "\345\255\230\345\234\250\351\227\256\351\242\230\345\217\212\345\216\237\345\233\240:", 0));
        BtnConfirm->setText(QApplication::translate("Monthly", "\347\241\256\345\256\232", 0));
        BtnCancel->setText(QApplication::translate("Monthly", "\351\200\200\345\207\272", 0));
        dailyInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Monthly: public Ui_Monthly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLY_H
