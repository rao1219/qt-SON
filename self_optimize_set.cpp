#include "self_optimize_set.h"
#include "ui_self_optimize_set.h"
#include <QDebug>


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
        connect(event[i], SIGNAL(clicked()), this, SLOT(clickevent()));
    }
    ui->verticalLayout->addWidget(event[0]);
    ui->verticalLayout_2->addWidget(event[1]);
    ui->verticalLayout_3->addWidget(event[2]);
    ui->verticalLayout_4->addWidget(event[3]);
    ui->verticalLayout_5->addWidget(event[4]);
    ui->verticalLayout_6->addWidget(event[5]);
    ui->verticalLayout_7->addWidget(event[6]);

}

self_optimize_set::~self_optimize_set()
{
    delete ui;
}

void self_optimize_set::clickevent()
{
    qDebug()<<"confirm event"<<endl;
}
