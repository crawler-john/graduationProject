/********************************************************************************
** Form generated from reading UI file 'daily.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILY_H
#define UI_DAILY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Daily
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *content;
    QLabel *label_2;
    QTextEdit *problem;
    QLabel *label_3;
    QTextEdit *solution;
    QLabel *label_4;
    QTextEdit *plan;

    void setupUi(QDialog *Daily)
    {
        if (Daily->objectName().isEmpty())
            Daily->setObjectName(QStringLiteral("Daily"));
        Daily->resize(362, 337);
        Daily->setStyleSheet(QLatin1String("QDialog#Daily{\n"
"	background-image:url(img/daily.jpg);\n"
"}"));
        buttonBox = new QDialogButtonBox(Daily);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(190, 300, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Daily);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 91, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        content = new QTextEdit(Daily);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(130, 60, 221, 61));
        content->setStyleSheet(QLatin1String("QTextEdit#content{\n"
"	background:transparent;\n"
"}  \n"
"     \n"
""));
        label_2 = new QLabel(Daily);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        problem = new QTextEdit(Daily);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setGeometry(QRect(130, 130, 221, 41));
        problem->setStyleSheet(QLatin1String("QTextEdit#problem{\n"
"	background:transparent;\n"
"}  "));
        label_3 = new QLabel(Daily);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 180, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        solution = new QTextEdit(Daily);
        solution->setObjectName(QStringLiteral("solution"));
        solution->setGeometry(QRect(130, 180, 221, 41));
        solution->setStyleSheet(QLatin1String("QTextEdit#solution{\n"
"	background:transparent;\n"
"}  "));
        label_4 = new QLabel(Daily);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 230, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(0, 85, 0);"));
        plan = new QTextEdit(Daily);
        plan->setObjectName(QStringLiteral("plan"));
        plan->setGeometry(QRect(130, 230, 221, 41));
        plan->setStyleSheet(QLatin1String("QTextEdit#plan{\n"
"	background:transparent;\n"
"}  "));

        retranslateUi(Daily);
        QObject::connect(buttonBox, SIGNAL(accepted()), Daily, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Daily, SLOT(reject()));

        QMetaObject::connectSlotsByName(Daily);
    } // setupUi

    void retranslateUi(QDialog *Daily)
    {
        Daily->setWindowTitle(QApplication::translate("Daily", "Dialog", 0));
        label->setText(QApplication::translate("Daily", "\344\270\273\350\246\201\345\206\205\345\256\271\357\274\232", 0));
        label_2->setText(QApplication::translate("Daily", "\345\255\230\345\234\250\351\227\256\351\242\230\345\217\212\345\216\237\345\233\240:", 0));
        label_3->setText(QApplication::translate("Daily", "\351\227\256\351\242\230\350\247\243\345\206\263\346\226\271\346\241\210:", 0));
        label_4->setText(QApplication::translate("Daily", "\344\270\213\345\221\250\350\256\241\345\210\222:", 0));
    } // retranslateUi

};

namespace Ui {
    class Daily: public Ui_Daily {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILY_H
