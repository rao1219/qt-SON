/********************************************************************************
** Form generated from reading UI file 'self_set.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELF_SET_H
#define UI_SELF_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_self_set
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QDial *dial;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QDial *dial_2;
    QLabel *label_9;
    QFrame *line_3;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *PARAMETERA;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *PARAMETERB;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpinBox *RSRP0;
    QLabel *label_8;
    QLabel *label_13;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_7;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *COVERRATE;
    QLabel *label_12;
    QDial *dial_3;
    QPushButton *pushButton;
    QLabel *label_14;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QDoubleSpinBox *SINRSPIN;

    void setupUi(QDialog *self_set)
    {
        if (self_set->objectName().isEmpty())
            self_set->setObjectName(QStringLiteral("self_set"));
        self_set->resize(709, 786);
        self_set->setStyleSheet(QStringLiteral("background-color: rgb(29, 15, 29);"));
        buttonBox = new QDialogButtonBox(self_set);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(310, 730, 341, 32));
        buttonBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(self_set);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 651, 671));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(87, 16, 16);\n"
"\n"
"\n"
""));
        dial = new QDial(groupBox);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(300, 30, 50, 64));
        dial->setMaximum(50);
        dial->setValue(50);
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 90, 341, 16));
        line->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(60, 210, 341, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 230, 141, 17));
        dial_2 = new QDial(groupBox);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(300, 250, 50, 64));
        dial_2->setMinimum(-99);
        dial_2->setValue(-85);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 310, 141, 17));
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(60, 340, 341, 16));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 360, 67, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(68, 440, 67, 17));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 560, 120, 60));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(false);

        verticalLayout_2->addWidget(radioButton_2);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 520, 171, 16));
        horizontalSlider->setValue(95);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 110, 105, 20));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 140, 93, 62));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        PARAMETERA = new QDoubleSpinBox(layoutWidget1);
        PARAMETERA->setObjectName(QStringLiteral("PARAMETERA"));
        PARAMETERA->setAutoFillBackground(false);
        PARAMETERA->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        PARAMETERA->setValue(20);

        horizontalLayout_3->addWidget(PARAMETERA);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        PARAMETERB = new QDoubleSpinBox(layoutWidget1);
        PARAMETERB->setObjectName(QStringLiteral("PARAMETERB"));
        PARAMETERB->setAutoFillBackground(false);
        PARAMETERB->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        PARAMETERB->setValue(32.4);

        horizontalLayout_6->addWidget(PARAMETERB);


        verticalLayout->addLayout(horizontalLayout_6);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(70, 270, 165, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        RSRP0 = new QSpinBox(layoutWidget2);
        RSRP0->setObjectName(QStringLiteral("RSRP0"));
        RSRP0->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        RSRP0->setMinimum(-200);
        RSRP0->setValue(-85);

        horizontalLayout_2->addWidget(RSRP0);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(85, 16, 16);"));

        horizontalLayout_2->addWidget(label_13);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 50, 192, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        spinBox->setMaximum(50);
        spinBox->setValue(50);

        horizontalLayout->addWidget(spinBox);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(130, 480, 65, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        COVERRATE = new QSpinBox(layoutWidget4);
        COVERRATE->setObjectName(QStringLiteral("COVERRATE"));
        COVERRATE->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        COVERRATE->setValue(95);

        horizontalLayout_4->addWidget(COVERRATE);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_4->addWidget(label_12);

        dial_3 = new QDial(groupBox);
        dial_3->setObjectName(QStringLiteral("dial_3"));
        dial_3->setGeometry(QRect(300, 458, 50, 64));
        dial_3->setMaximumSize(QSize(16777215, 16777211));
        dial_3->setMinimum(0);
        dial_3->setValue(95);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 620, 89, 25));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(63, 350, 111, 17));
        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(119, 392, 114, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget5);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_5->addWidget(label_15);

        SINRSPIN = new QDoubleSpinBox(layoutWidget5);
        SINRSPIN->setObjectName(QStringLiteral("SINRSPIN"));
        SINRSPIN->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/back.PNG);"));
        SINRSPIN->setValue(10);

        horizontalLayout_5->addWidget(SINRSPIN);


        retranslateUi(self_set);
        QObject::connect(buttonBox, SIGNAL(accepted()), self_set, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), self_set, SLOT(reject()));
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), RSRP0, SLOT(setValue(int)));
        QObject::connect(RSRP0, SIGNAL(valueChanged(int)), dial_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), COVERRATE, SLOT(setValue(int)));
        QObject::connect(COVERRATE, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(COVERRATE, SIGNAL(valueChanged(int)), dial_3, SLOT(setValue(int)));
        QObject::connect(dial_3, SIGNAL(valueChanged(int)), COVERRATE, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(self_set);
    } // setupUi

    void retranslateUi(QDialog *self_set)
    {
        self_set->setWindowTitle(QApplication::translate("self_set", "\350\207\252\351\205\215\347\275\256", 0));
        groupBox->setTitle(QApplication::translate("self_set", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label_2->setText(QApplication::translate("self_set", "\351\200\232\344\277\241\346\234\200\345\260\217\344\277\241\345\217\267\345\274\272\345\272\246\357\274\232", 0));
        label_9->setText(QApplication::translate("self_set", "(Lr(\350\267\257\346\215\237)=alog(d)+b)", 0));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("self_set", "\350\246\206\347\233\226\347\216\207\357\274\232", 0));
        radioButton->setText(QApplication::translate("self_set", "\345\271\263\345\235\207SINR\346\234\200\344\274\230", 0));
        radioButton_2->setText(QApplication::translate("self_set", "\350\203\275\346\225\210\346\257\224\346\234\200\351\253\230", 0));
        label_4->setText(QApplication::translate("self_set", "\350\267\257\346\215\237\346\250\241\345\236\213\345\217\202\346\225\260\357\274\232", 0));
        label_3->setText(QApplication::translate("self_set", "a=", 0));
        label_6->setText(QApplication::translate("self_set", "b=", 0));
        label_5->setText(QApplication::translate("self_set", "RSRP0=", 0));
        label_8->setText(QApplication::translate("self_set", "dBm", 0));
        label_13->setText(QString());
        label->setText(QApplication::translate("self_set", "\345\237\272\347\253\231\351\242\235\345\256\232\345\212\237\347\216\207=", 0));
        label_7->setText(QApplication::translate("self_set", "dBm", 0));
        label_12->setText(QApplication::translate("self_set", "%", 0));
        pushButton->setText(QApplication::translate("self_set", "\346\201\242\345\244\215\351\273\230\350\256\244", 0));
        label_14->setText(QApplication::translate("self_set", "\344\270\264\347\225\214\344\277\241\345\231\252\346\257\224\357\274\232", 0));
        label_15->setText(QApplication::translate("self_set", "SINR=", 0));
    } // retranslateUi

};

namespace Ui {
    class self_set: public Ui_self_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELF_SET_H
