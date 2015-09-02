/********************************************************************************
** Form generated from reading UI file 'graphicstest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSTEST_H
#define UI_GRAPHICSTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GraphicsTest
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *GraphicsTest)
    {
        if (GraphicsTest->objectName().isEmpty())
            GraphicsTest->setObjectName(QStringLiteral("GraphicsTest"));
        GraphicsTest->resize(1243, 885);
        verticalLayout = new QVBoxLayout(GraphicsTest);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_3 = new QPushButton(GraphicsTest);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        horizontalSlider = new QSlider(GraphicsTest);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(200);
        horizontalSlider->setMaximum(300);
        horizontalSlider->setValue(250);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(GraphicsTest);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(GraphicsTest);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        graphicsView = new QGraphicsView(GraphicsTest);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(1080, 800));
        graphicsView->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(GraphicsTest);

        QMetaObject::connectSlotsByName(GraphicsTest);
    } // setupUi

    void retranslateUi(QDialog *GraphicsTest)
    {
        GraphicsTest->setWindowTitle(QApplication::translate("GraphicsTest", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("GraphicsTest", "\346\230\276\347\244\272\345\235\220\346\240\207", 0));
        pushButton->setText(QApplication::translate("GraphicsTest", "+1", 0));
        pushButton_2->setText(QApplication::translate("GraphicsTest", "-1", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphicsTest: public Ui_GraphicsTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSTEST_H


