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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AddProject
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddProject)
    {
        if (AddProject->objectName().isEmpty())
            AddProject->setObjectName(QStringLiteral("AddProject"));
        AddProject->resize(379, 400);
        AddProject->setStyleSheet(QLatin1String("QDialog#AddProject{\n"
"	background-image:url(img/addproject.jpg);\n"
"}"));
        buttonBox = new QDialogButtonBox(AddProject);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(22, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AddProject);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddProject, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddProject, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddProject);
    } // setupUi

    void retranslateUi(QDialog *AddProject)
    {
        AddProject->setWindowTitle(QApplication::translate("AddProject", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class AddProject: public Ui_AddProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJECT_H
