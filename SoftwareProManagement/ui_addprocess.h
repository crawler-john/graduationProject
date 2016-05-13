/********************************************************************************
** Form generated from reading UI file 'addprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROCESS_H
#define UI_ADDPROCESS_H

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

class Ui_addProcess
{
public:
    QSpinBox *planStartYear;
    QLabel *label_9;
    QLabel *label;
    QSpinBox *realEndYear;
    QSpinBox *realEndDay;
    QSpinBox *createMonth;
    QLabel *label_2;
    QLabel *label_91;
    QLineEdit *processName;
    QLabel *label_95;
    QLabel *label_7;
    QLabel *label_97;
    QSpinBox *realEndMonth;
    QSpinBox *createDay;
    QSpinBox *planEndYear;
    QLabel *label_8;
    QLabel *label_92;
    QLabel *label_3;
    QLabel *label_98;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_94;
    QSpinBox *realStartMonth;
    QPushButton *BtnConfirm;
    QSpinBox *planEndMonth;
    QSpinBox *planStartDay;
    QLabel *label_96;
    QSpinBox *createtYear;
    QPushButton *BtnCancel;
    QLabel *dailyInfo;
    QLabel *label_93;
    QSpinBox *realStartYear;
    QSpinBox *planStartMonth;
    QLabel *label_90;
    QLabel *label_89;
    QSpinBox *realStartDay;
    QTextEdit *proDescribe;
    QSpinBox *planEndDay;
    QComboBox *proName;
    QLabel *label_4;
    QComboBox *processTaskName;

    void setupUi(QDialog *addProcess)
    {
        if (addProcess->objectName().isEmpty())
            addProcess->setObjectName(QStringLiteral("addProcess"));
        addProcess->resize(379, 394);
        addProcess->setStyleSheet(QLatin1String("QDialog#addProcess{\n"
"	background-image:url(img/addProcess.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        planStartYear = new QSpinBox(addProcess);
        planStartYear->setObjectName(QStringLiteral("planStartYear"));
        planStartYear->setGeometry(QRect(169, 166, 61, 22));
        label_9 = new QLabel(addProcess);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(24, 256, 141, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label = new QLabel(addProcess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(24, 70, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        realEndYear = new QSpinBox(addProcess);
        realEndYear->setObjectName(QStringLiteral("realEndYear"));
        realEndYear->setGeometry(QRect(169, 256, 61, 22));
        realEndDay = new QSpinBox(addProcess);
        realEndDay->setObjectName(QStringLiteral("realEndDay"));
        realEndDay->setGeometry(QRect(284, 256, 42, 22));
        createMonth = new QSpinBox(addProcess);
        createMonth->setObjectName(QStringLiteral("createMonth"));
        createMonth->setGeometry(QRect(234, 132, 42, 22));
        label_2 = new QLabel(addProcess);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(24, 40, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_91 = new QLabel(addProcess);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(229, 170, 16, 16));
        processName = new QLineEdit(addProcess);
        processName->setObjectName(QStringLiteral("processName"));
        processName->setGeometry(QRect(94, 40, 91, 20));
        label_95 = new QLabel(addProcess);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(277, 230, 16, 16));
        label_7 = new QLabel(addProcess);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(24, 166, 141, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_97 = new QLabel(addProcess);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setGeometry(QRect(277, 260, 16, 16));
        realEndMonth = new QSpinBox(addProcess);
        realEndMonth->setObjectName(QStringLiteral("realEndMonth"));
        realEndMonth->setGeometry(QRect(234, 256, 42, 22));
        createDay = new QSpinBox(addProcess);
        createDay->setObjectName(QStringLiteral("createDay"));
        createDay->setGeometry(QRect(284, 132, 42, 22));
        planEndYear = new QSpinBox(addProcess);
        planEndYear->setObjectName(QStringLiteral("planEndYear"));
        planEndYear->setGeometry(QRect(169, 196, 61, 22));
        label_8 = new QLabel(addProcess);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(24, 196, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_92 = new QLabel(addProcess);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(277, 170, 16, 16));
        label_3 = new QLabel(addProcess);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(24, 286, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_98 = new QLabel(addProcess);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(229, 260, 16, 16));
        label_11 = new QLabel(addProcess);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(24, 226, 141, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_12 = new QLabel(addProcess);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(24, 136, 141, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_94 = new QLabel(addProcess);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(229, 200, 16, 16));
        realStartMonth = new QSpinBox(addProcess);
        realStartMonth->setObjectName(QStringLiteral("realStartMonth"));
        realStartMonth->setGeometry(QRect(234, 226, 42, 22));
        BtnConfirm = new QPushButton(addProcess);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(234, 356, 61, 23));
        planEndMonth = new QSpinBox(addProcess);
        planEndMonth->setObjectName(QStringLiteral("planEndMonth"));
        planEndMonth->setGeometry(QRect(234, 196, 42, 22));
        planStartDay = new QSpinBox(addProcess);
        planStartDay->setObjectName(QStringLiteral("planStartDay"));
        planStartDay->setGeometry(QRect(284, 166, 42, 22));
        label_96 = new QLabel(addProcess);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setGeometry(QRect(229, 230, 16, 16));
        createtYear = new QSpinBox(addProcess);
        createtYear->setObjectName(QStringLiteral("createtYear"));
        createtYear->setGeometry(QRect(169, 132, 61, 22));
        BtnCancel = new QPushButton(addProcess);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(304, 356, 61, 23));
        dailyInfo = new QLabel(addProcess);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(14, 356, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        label_93 = new QLabel(addProcess);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(277, 200, 16, 16));
        realStartYear = new QSpinBox(addProcess);
        realStartYear->setObjectName(QStringLiteral("realStartYear"));
        realStartYear->setGeometry(QRect(169, 226, 61, 22));
        planStartMonth = new QSpinBox(addProcess);
        planStartMonth->setObjectName(QStringLiteral("planStartMonth"));
        planStartMonth->setGeometry(QRect(234, 166, 42, 22));
        label_90 = new QLabel(addProcess);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(277, 136, 16, 16));
        label_89 = new QLabel(addProcess);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(229, 136, 16, 16));
        realStartDay = new QSpinBox(addProcess);
        realStartDay->setObjectName(QStringLiteral("realStartDay"));
        realStartDay->setGeometry(QRect(284, 226, 42, 22));
        proDescribe = new QTextEdit(addProcess);
        proDescribe->setObjectName(QStringLiteral("proDescribe"));
        proDescribe->setGeometry(QRect(100, 286, 261, 51));
        planEndDay = new QSpinBox(addProcess);
        planEndDay->setObjectName(QStringLiteral("planEndDay"));
        planEndDay->setGeometry(QRect(284, 196, 42, 22));
        proName = new QComboBox(addProcess);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(90, 68, 261, 22));
        label_4 = new QLabel(addProcess);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(24, 102, 141, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        processTaskName = new QComboBox(addProcess);
        processTaskName->setObjectName(QStringLiteral("processTaskName"));
        processTaskName->setGeometry(QRect(160, 100, 191, 22));

        retranslateUi(addProcess);

        QMetaObject::connectSlotsByName(addProcess);
    } // setupUi

    void retranslateUi(QDialog *addProcess)
    {
        addProcess->setWindowTitle(QApplication::translate("addProcess", "Dialog", 0));
        label_9->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\345\256\236\351\231\205\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
        label->setText(QApplication::translate("addProcess", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\345\220\215\357\274\232", 0));
        label_91->setText(QApplication::translate("addProcess", "-", 0));
        label_95->setText(QApplication::translate("addProcess", "-", 0));
        label_7->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\350\256\241\345\210\222\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_97->setText(QApplication::translate("addProcess", "-", 0));
        label_8->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\350\256\241\345\210\222\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
        label_92->setText(QApplication::translate("addProcess", "-", 0));
        label_3->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\346\217\217\350\277\260\357\274\232", 0));
        label_98->setText(QApplication::translate("addProcess", "-", 0));
        label_11->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\345\256\236\351\231\205\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_12->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", 0));
        label_94->setText(QApplication::translate("addProcess", "-", 0));
        BtnConfirm->setText(QApplication::translate("addProcess", "\347\241\256\345\256\232", 0));
        label_96->setText(QApplication::translate("addProcess", "-", 0));
        BtnCancel->setText(QApplication::translate("addProcess", "\351\200\200\345\207\272", 0));
        dailyInfo->setText(QString());
        label_93->setText(QApplication::translate("addProcess", "-", 0));
        label_90->setText(QApplication::translate("addProcess", "-", 0));
        label_89->setText(QApplication::translate("addProcess", "-", 0));
        label_4->setText(QApplication::translate("addProcess", "\350\277\233\345\272\246\347\256\241\347\220\206\347\232\204\344\273\273\345\212\241\345\220\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class addProcess: public Ui_addProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROCESS_H
