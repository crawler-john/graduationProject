/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

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

class Ui_addTask
{
public:
    QComboBox *proName;
    QTextEdit *taskDescribe;
    QComboBox *taskrequest;
    QLabel *label_4;
    QPushButton *BtnCancel;
    QPushButton *BtnConfirm;
    QLabel *Info;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *taskname;
    QLabel *label_5;
    QComboBox *taskprioriy;
    QLabel *label_6;
    QComboBox *taskexector;
    QLabel *label_91;
    QSpinBox *planStartDay;
    QSpinBox *planEndDay;
    QSpinBox *planStartYear;
    QLabel *label_92;
    QSpinBox *planEndYear;
    QLabel *label_94;
    QLabel *label_93;
    QSpinBox *planEndMonth;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *planStartMonth;

    void setupUi(QDialog *addTask)
    {
        if (addTask->objectName().isEmpty())
            addTask->setObjectName(QStringLiteral("addTask"));
        addTask->resize(380, 367);
        addTask->setStyleSheet(QLatin1String("QDialog#addTask{\n"
"	background-image:url(img/addTask.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        proName = new QComboBox(addTask);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(96, 78, 261, 22));
        taskDescribe = new QTextEdit(addTask);
        taskDescribe->setObjectName(QStringLiteral("taskDescribe"));
        taskDescribe->setGeometry(QRect(106, 260, 261, 61));
        taskrequest = new QComboBox(addTask);
        taskrequest->setObjectName(QStringLiteral("taskrequest"));
        taskrequest->setGeometry(QRect(166, 110, 191, 22));
        label_4 = new QLabel(addTask);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 112, 141, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        BtnCancel = new QPushButton(addTask);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 330, 61, 23));
        BtnConfirm = new QPushButton(addTask);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 330, 61, 23));
        Info = new QLabel(addTask);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(20, 330, 161, 21));
        Info->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        label_2 = new QLabel(addTask);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_3 = new QLabel(addTask);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label = new QLabel(addTask);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        taskname = new QLineEdit(addTask);
        taskname->setObjectName(QStringLiteral("taskname"));
        taskname->setGeometry(QRect(100, 50, 91, 20));
        label_5 = new QLabel(addTask);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 170, 91, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        taskprioriy = new QComboBox(addTask);
        taskprioriy->setObjectName(QStringLiteral("taskprioriy"));
        taskprioriy->setGeometry(QRect(120, 170, 111, 22));
        label_6 = new QLabel(addTask);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 140, 91, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        taskexector = new QComboBox(addTask);
        taskexector->setObjectName(QStringLiteral("taskexector"));
        taskexector->setGeometry(QRect(120, 140, 191, 22));
        label_91 = new QLabel(addTask);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(235, 204, 16, 16));
        planStartDay = new QSpinBox(addTask);
        planStartDay->setObjectName(QStringLiteral("planStartDay"));
        planStartDay->setGeometry(QRect(290, 200, 42, 22));
        planEndDay = new QSpinBox(addTask);
        planEndDay->setObjectName(QStringLiteral("planEndDay"));
        planEndDay->setGeometry(QRect(290, 230, 42, 22));
        planStartYear = new QSpinBox(addTask);
        planStartYear->setObjectName(QStringLiteral("planStartYear"));
        planStartYear->setGeometry(QRect(175, 200, 61, 22));
        label_92 = new QLabel(addTask);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(283, 204, 16, 16));
        planEndYear = new QSpinBox(addTask);
        planEndYear->setObjectName(QStringLiteral("planEndYear"));
        planEndYear->setGeometry(QRect(175, 230, 61, 22));
        label_94 = new QLabel(addTask);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(235, 234, 16, 16));
        label_93 = new QLabel(addTask);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(283, 234, 16, 16));
        planEndMonth = new QSpinBox(addTask);
        planEndMonth->setObjectName(QStringLiteral("planEndMonth"));
        planEndMonth->setGeometry(QRect(240, 230, 42, 22));
        label_7 = new QLabel(addTask);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 200, 141, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_8 = new QLabel(addTask);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 230, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        planStartMonth = new QSpinBox(addTask);
        planStartMonth->setObjectName(QStringLiteral("planStartMonth"));
        planStartMonth->setGeometry(QRect(240, 200, 42, 22));

        retranslateUi(addTask);

        QMetaObject::connectSlotsByName(addTask);
    } // setupUi

    void retranslateUi(QDialog *addTask)
    {
        addTask->setWindowTitle(QApplication::translate("addTask", "Dialog", 0));
        label_4->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\347\233\270\345\205\263\347\232\204\351\234\200\346\261\202\345\220\215\357\274\232", 0));
        BtnCancel->setText(QApplication::translate("addTask", "\351\200\200\345\207\272", 0));
        BtnConfirm->setText(QApplication::translate("addTask", "\347\241\256\345\256\232", 0));
        Info->setText(QString());
        label_2->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232", 0));
        label->setText(QApplication::translate("addTask", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\344\274\230\345\205\210\347\272\247\357\274\232", 0));
        taskprioriy->clear();
        taskprioriy->insertItems(0, QStringList()
         << QApplication::translate("addTask", "\346\234\200\351\253\230\347\272\247", 0)
         << QApplication::translate("addTask", "\346\254\241\351\253\230\347\272\247", 0)
         << QApplication::translate("addTask", "\351\253\230\347\272\247", 0)
         << QApplication::translate("addTask", "\344\270\255\347\272\247", 0)
         << QApplication::translate("addTask", "\344\275\216\347\272\247", 0)
         << QApplication::translate("addTask", "\346\254\241\344\275\216\347\272\247", 0)
         << QApplication::translate("addTask", "\346\234\200\344\275\216\347\272\247", 0)
        );
        label_6->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\346\211\247\350\241\214\350\200\205\357\274\232", 0));
        label_91->setText(QApplication::translate("addTask", "-", 0));
        label_92->setText(QApplication::translate("addTask", "-", 0));
        label_94->setText(QApplication::translate("addTask", "-", 0));
        label_93->setText(QApplication::translate("addTask", "-", 0));
        label_7->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\350\256\241\345\210\222\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_8->setText(QApplication::translate("addTask", "\344\273\273\345\212\241\350\256\241\345\210\222\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addTask: public Ui_addTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
