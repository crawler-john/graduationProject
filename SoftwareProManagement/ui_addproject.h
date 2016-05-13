/********************************************************************************
** Form generated from reading UI file 'addproject.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROJECT_H
#define UI_ADDPROJECT_H

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

class Ui_AddProject
{
public:
    QPushButton *BtnCancel;
    QLabel *dailyInfo;
    QPushButton *BtnConfirm;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *proName;
    QLineEdit *proClient;
    QComboBox *proManager;
    QComboBox *proState;
    QLineEdit *proCost;
    QSpinBox *createMonth;
    QSpinBox *createtYear;
    QSpinBox *createDay;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_91;
    QSpinBox *planStartDay;
    QSpinBox *planStartMonth;
    QLabel *label_92;
    QSpinBox *planStartYear;
    QSpinBox *planEndYear;
    QSpinBox *planEndMonth;
    QLabel *label_93;
    QLabel *label_94;
    QSpinBox *planEndDay;
    QSpinBox *realStartDay;
    QLabel *label_95;
    QLabel *label_96;
    QSpinBox *realStartYear;
    QSpinBox *realStartMonth;
    QLabel *label_97;
    QSpinBox *realEndYear;
    QSpinBox *realEndDay;
    QLabel *label_98;
    QSpinBox *realEndMonth;
    QTextEdit *proDescribe;

    void setupUi(QDialog *AddProject)
    {
        if (AddProject->objectName().isEmpty())
            AddProject->setObjectName(QStringLiteral("AddProject"));
        AddProject->resize(379, 400);
        AddProject->setStyleSheet(QLatin1String("QDialog#AddProject{\n"
"	background-image:url(img/addproject.jpg);\n"
"}\n"
"QTextEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
"     \n"
"QLineEdit{\n"
"	background-color:rgb(235,199,255);\n"
"}  \n"
""));
        BtnCancel = new QPushButton(AddProject);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(310, 370, 61, 23));
        dailyInfo = new QLabel(AddProject);
        dailyInfo->setObjectName(QStringLiteral("dailyInfo"));
        dailyInfo->setGeometry(QRect(20, 370, 161, 21));
        dailyInfo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 0, 0);"));
        BtnConfirm = new QPushButton(AddProject);
        BtnConfirm->setObjectName(QStringLiteral("BtnConfirm"));
        BtnConfirm->setGeometry(QRect(240, 370, 61, 23));
        label = new QLabel(AddProject);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 71, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_2 = new QLabel(AddProject);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_3 = new QLabel(AddProject);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 300, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_4 = new QLabel(AddProject);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 120, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_5 = new QLabel(AddProject);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(196, 60, 71, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_6 = new QLabel(AddProject);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(196, 90, 71, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_7 = new QLabel(AddProject);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 180, 141, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_8 = new QLabel(AddProject);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 210, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_9 = new QLabel(AddProject);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 270, 141, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_10 = new QLabel(AddProject);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 240, 141, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        label_11 = new QLabel(AddProject);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 150, 141, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 0, 0);"));
        proName = new QLineEdit(AddProject);
        proName->setObjectName(QStringLiteral("proName"));
        proName->setGeometry(QRect(100, 59, 91, 20));
        proClient = new QLineEdit(AddProject);
        proClient->setObjectName(QStringLiteral("proClient"));
        proClient->setGeometry(QRect(100, 90, 91, 20));
        proManager = new QComboBox(AddProject);
        proManager->setObjectName(QStringLiteral("proManager"));
        proManager->setGeometry(QRect(266, 58, 111, 22));
        proState = new QComboBox(AddProject);
        proState->setObjectName(QStringLiteral("proState"));
        proState->setGeometry(QRect(266, 88, 111, 22));
        proCost = new QLineEdit(AddProject);
        proCost->setObjectName(QStringLiteral("proCost"));
        proCost->setGeometry(QRect(100, 120, 91, 20));
        createMonth = new QSpinBox(AddProject);
        createMonth->setObjectName(QStringLiteral("createMonth"));
        createMonth->setGeometry(QRect(240, 146, 42, 22));
        createtYear = new QSpinBox(AddProject);
        createtYear->setObjectName(QStringLiteral("createtYear"));
        createtYear->setGeometry(QRect(175, 146, 61, 22));
        createDay = new QSpinBox(AddProject);
        createDay->setObjectName(QStringLiteral("createDay"));
        createDay->setGeometry(QRect(290, 146, 42, 22));
        label_89 = new QLabel(AddProject);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(235, 150, 16, 16));
        label_90 = new QLabel(AddProject);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(283, 150, 16, 16));
        label_91 = new QLabel(AddProject);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(235, 184, 16, 16));
        planStartDay = new QSpinBox(AddProject);
        planStartDay->setObjectName(QStringLiteral("planStartDay"));
        planStartDay->setGeometry(QRect(290, 180, 42, 22));
        planStartMonth = new QSpinBox(AddProject);
        planStartMonth->setObjectName(QStringLiteral("planStartMonth"));
        planStartMonth->setGeometry(QRect(240, 180, 42, 22));
        label_92 = new QLabel(AddProject);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setGeometry(QRect(283, 184, 16, 16));
        planStartYear = new QSpinBox(AddProject);
        planStartYear->setObjectName(QStringLiteral("planStartYear"));
        planStartYear->setGeometry(QRect(175, 180, 61, 22));
        planEndYear = new QSpinBox(AddProject);
        planEndYear->setObjectName(QStringLiteral("planEndYear"));
        planEndYear->setGeometry(QRect(175, 210, 61, 22));
        planEndMonth = new QSpinBox(AddProject);
        planEndMonth->setObjectName(QStringLiteral("planEndMonth"));
        planEndMonth->setGeometry(QRect(240, 210, 42, 22));
        label_93 = new QLabel(AddProject);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(283, 214, 16, 16));
        label_94 = new QLabel(AddProject);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setGeometry(QRect(235, 214, 16, 16));
        planEndDay = new QSpinBox(AddProject);
        planEndDay->setObjectName(QStringLiteral("planEndDay"));
        planEndDay->setGeometry(QRect(290, 210, 42, 22));
        realStartDay = new QSpinBox(AddProject);
        realStartDay->setObjectName(QStringLiteral("realStartDay"));
        realStartDay->setGeometry(QRect(290, 240, 42, 22));
        label_95 = new QLabel(AddProject);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(283, 244, 16, 16));
        label_96 = new QLabel(AddProject);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setGeometry(QRect(235, 244, 16, 16));
        realStartYear = new QSpinBox(AddProject);
        realStartYear->setObjectName(QStringLiteral("realStartYear"));
        realStartYear->setGeometry(QRect(175, 240, 61, 22));
        realStartMonth = new QSpinBox(AddProject);
        realStartMonth->setObjectName(QStringLiteral("realStartMonth"));
        realStartMonth->setGeometry(QRect(240, 240, 42, 22));
        label_97 = new QLabel(AddProject);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setGeometry(QRect(283, 274, 16, 16));
        realEndYear = new QSpinBox(AddProject);
        realEndYear->setObjectName(QStringLiteral("realEndYear"));
        realEndYear->setGeometry(QRect(175, 270, 61, 22));
        realEndDay = new QSpinBox(AddProject);
        realEndDay->setObjectName(QStringLiteral("realEndDay"));
        realEndDay->setGeometry(QRect(290, 270, 42, 22));
        label_98 = new QLabel(AddProject);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(235, 274, 16, 16));
        realEndMonth = new QSpinBox(AddProject);
        realEndMonth->setObjectName(QStringLiteral("realEndMonth"));
        realEndMonth->setGeometry(QRect(240, 270, 42, 22));
        proDescribe = new QTextEdit(AddProject);
        proDescribe->setObjectName(QStringLiteral("proDescribe"));
        proDescribe->setGeometry(QRect(106, 300, 261, 51));

        retranslateUi(AddProject);

        QMetaObject::connectSlotsByName(AddProject);
    } // setupUi

    void retranslateUi(QDialog *AddProject)
    {
        AddProject->setWindowTitle(QApplication::translate("AddProject", "Dialog", 0));
        BtnCancel->setText(QApplication::translate("AddProject", "\351\200\200\345\207\272", 0));
        dailyInfo->setText(QString());
        BtnConfirm->setText(QApplication::translate("AddProject", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\345\256\242\346\210\267\357\274\232", 0));
        label_3->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\346\217\217\350\277\260\357\274\232", 0));
        label_4->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\347\273\217\350\264\271\357\274\232", 0));
        label_5->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\347\273\217\347\220\206\357\274\232", 0));
        label_6->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\347\212\266\346\200\201\357\274\232", 0));
        label_7->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\350\256\241\345\210\222\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_8->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\350\256\241\345\210\222\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
        label_9->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\345\256\236\351\231\205\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
        label_10->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\345\256\236\351\231\205\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_11->setText(QApplication::translate("AddProject", "\351\241\271\347\233\256\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", 0));
        label_89->setText(QApplication::translate("AddProject", "-", 0));
        label_90->setText(QApplication::translate("AddProject", "-", 0));
        label_91->setText(QApplication::translate("AddProject", "-", 0));
        label_92->setText(QApplication::translate("AddProject", "-", 0));
        label_93->setText(QApplication::translate("AddProject", "-", 0));
        label_94->setText(QApplication::translate("AddProject", "-", 0));
        label_95->setText(QApplication::translate("AddProject", "-", 0));
        label_96->setText(QApplication::translate("AddProject", "-", 0));
        label_97->setText(QApplication::translate("AddProject", "-", 0));
        label_98->setText(QApplication::translate("AddProject", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class AddProject: public Ui_AddProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJECT_H
