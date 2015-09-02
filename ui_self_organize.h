/********************************************************************************
** Form generated from reading UI file 'self_organize.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELF_ORGANIZE_H
#define UI_SELF_ORGANIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_self_organize
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *self_organize)
    {
        if (self_organize->objectName().isEmpty())
            self_organize->setObjectName(QStringLiteral("self_organize"));
        self_organize->resize(400, 300);
        self_organize->setAcceptDrops(false);
        self_organize->setStyleSheet(QStringLiteral("background-color: rgb(29, 15, 29);"));
        buttonBox = new QDialogButtonBox(self_organize);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(self_organize);
        QObject::connect(buttonBox, SIGNAL(accepted()), self_organize, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), self_organize, SLOT(reject()));

        QMetaObject::connectSlotsByName(self_organize);
    } // setupUi

    void retranslateUi(QDialog *self_organize)
    {
        self_organize->setWindowTitle(QApplication::translate("self_organize", "\350\207\252\344\274\230\345\214\226", 0));
    } // retranslateUi

};

namespace Ui {
    class self_organize: public Ui_self_organize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELF_ORGANIZE_H


