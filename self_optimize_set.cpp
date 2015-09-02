#include "self_optimize_set.h"
#include "ui_self_optimize_set.h"
#include <QDebug>
#include <QMessageBox>


self_optimize_set::self_optimize_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::self_optimize_set)
{
    ui->setupUi(this);
    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (29, 15, 29));
    //bgpal.setColor (QPalette::Background, Qt::transparent);
    bgpal.setColor (QPalette::Foreground, QColor(255,255,255,255));
    setPalette (bgpal);
    for(int i=0;i<9;i++){
        event[i] = new eventButton;
    }
    ui->verticalLayout->addWidget(event[0]);
    ui->verticalLayout_2->addWidget(event[1]);
    ui->verticalLayout_3->addWidget(event[2]);
    ui->verticalLayout_4->addWidget(event[3]);
    ui->verticalLayout_5->addWidget(event[4]);
    ui->verticalLayout_6->addWidget(event[5]);
    ui->verticalLayout_7->addWidget(event[6]);

    connect(event[0], SIGNAL(clicked()), this, SLOT(clickevent_1()));
    connect(event[1], SIGNAL(clicked()), this, SLOT(clickevent_2()));
    connect(event[2], SIGNAL(clicked()), this, SLOT(clickevent_3()));
    connect(event[3], SIGNAL(clicked()), this, SLOT(clickevent_4()));
    connect(event[4], SIGNAL(clicked()), this, SLOT(clickevent_5()));
    connect(event[5], SIGNAL(clicked()), this, SLOT(clickevent_6()));
    connect(event[6], SIGNAL(clicked()), this, SLOT(clickevent_7()));

}

self_optimize_set::~self_optimize_set()
{
    delete ui;
}

void self_optimize_set::clickevent_1()
{
    int curr=0;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
           // event[curr]->txt=
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_2()
{
    int curr=1;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_3()
{
    int curr=2;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_4()
{
    int curr=3;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_5()
{
    int curr=4;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_6()
{
    int curr=5;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
void self_optimize_set::clickevent_7()
{
    int curr=6;
    if(event[curr]->hasEvent==true){
        QMessageBox::information(this,"Error!","不能重复添加事件！");
    }
    else{
        qDebug()<<"confirm event: "<<endl;
        eventwindow = new eventSet;
        eventwindow->exec();

        if (eventwindow->accepted == true)
        {
            event[curr]->hasEvent=true;
            event[curr]->reinit();
        }
    }
}
