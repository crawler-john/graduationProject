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

QT_BEGIN_NAMESPACE

class Ui_Daily
{
public:
    QDialogButtonBox *buttonBox;

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

        retranslateUi(Daily);
        QObject::connect(buttonBox, SIGNAL(accepted()), Daily, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Daily, SLOT(reject()));

        QMetaObject::connectSlotsByName(Daily);
    } // setupUi

    void retranslateUi(QDialog *Daily)
    {
        Daily->setWindowTitle(QApplication::translate("Daily", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Daily: public Ui_Daily {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILY_H
