/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralWidget;
    QFrame *frame;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame_4;
    QTextEdit *textEdit_2;
    QGraphicsView *graphicsView;
    QScrollBar *horizontalScrollBar;
    QWidget *tab_4;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QFrame *frame_3;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1621, 924);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(29, 15, 29);"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(100, 10, 1351, 91));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/background.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(220, 110, 1301, 621));
        tabWidget->setBaseSize(QSize(0, 0));
        tabWidget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: rgb(236, 27, 27);\n"
"color: rgb(17, 7, 7);\n"
"selection-background-color: rgb(20, 20, 20);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMaximumSize(QSize(16777215, 16777215));
        tab->setContextMenuPolicy(Qt::DefaultContextMenu);
        frame_4 = new QFrame(tab);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 171, 211));
        frame_4->setStyleSheet(QLatin1String("background-color: rgb(29, 15, 29);\n"
"color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(22, 20, 131, 171));
        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1301, 591));
        horizontalScrollBar = new QScrollBar(tab);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(1009, 550, 231, 20));
        horizontalScrollBar->setMaximum(200);
        horizontalScrollBar->setSingleStep(0);
        horizontalScrollBar->setValue(100);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab, QString());
        graphicsView->raise();
        frame_4->raise();
        horizontalScrollBar->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        frame_2 = new QFrame(tab_4);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 171, 211));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(128, 128, 128);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 91, 17));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 170, 67, 17));
        tabWidget->addTab(tab_4, QString());
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 740, 1511, 101));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(29, 15, 29);\n"
"color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(30, 120, 181, 601));
        frame_3->setBaseSize(QSize(0, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        toolBox = new QToolBox(frame_3);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 0, 161, 591));
        toolBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 161, 489));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 111, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\";\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\";\n"
""));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        toolBox->addItem(page, QString::fromUtf8("\345\237\272\346\234\254\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 161, 489));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 50, 89, 25));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 110, 89, 25));
        toolBox->addItem(page_2, QString::fromUtf8("\347\275\221\347\273\234\350\212\202\347\202\271\347\256\241\347\220\206"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 161, 489));
        toolBox->addItem(page_3, QString::fromUtf8("\345\205\266\344\273\226\350\256\276\347\275\256"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1621, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton, tabWidget);
        QWidget::setTabOrder(tabWidget, pushButton_2);
        QWidget::setTabOrder(pushButton_2, textEdit);

        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu_3->addSeparator();
        menu_3->addAction(action_8);
        menu_3->addAction(action_9);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_2->setText(QApplication::translate("MainWindow", "\350\207\252\344\274\230\345\214\226", 0));
        action_3->setText(QApplication::translate("MainWindow", "\350\264\237\350\275\275\345\235\207\350\241\241", 0));
        action_4->setText(QApplication::translate("MainWindow", "\347\235\241\347\234\240\346\250\241\345\274\217", 0));
        action_5->setText(QApplication::translate("MainWindow", "\350\275\275\345\205\245", 0));
        action_6->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        action_8->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207\350\207\252\351\205\215\347\275\256", 0));
        action_9->setText(QApplication::translate("MainWindow", "\345\212\237\347\216\207\350\207\252\351\205\215\347\275\256", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\234\260\345\233\276</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\205\215\347\275\256\347\273\223\346\236\234\357\274\232</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\234\260\345\233\276", 0));
        label->setText(QApplication::translate("MainWindow", "\350\246\206\347\233\226\346\203\205\345\206\265\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\203\275\346\225\210\346\257\224\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "X-map\345\233\276", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\216\247\345\210\266\345\217\260\350\276\223\345\207\272</p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\350\207\252\351\205\215\347\275\256", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\207\252\344\274\230\345\214\226", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "test", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\266\210\346\201\257\346\241\206", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\256\276\347\275\256", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\242\236\351\207\217", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "reset", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\347\275\221\347\273\234\350\212\202\347\202\271\347\256\241\347\220\206", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\345\205\266\344\273\226\350\256\276\347\275\256", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\345\212\237\350\203\275", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\207\252\351\205\215\347\275\256", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
    } // retranslateUi

};


namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H


