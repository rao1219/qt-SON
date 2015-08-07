#include "graphicstest.h"
#include "ui_graphicstest.h"
#include <iostream>

GraphicsTest::GraphicsTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphicsTest)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QBrush yelloBrush(Qt::yellow);

    QPen blackPen(Qt::black);
    blackPen.setWidth(6);
    QPen bluePen(Qt::blue);
    bluePen.setWidth(0.5);
    srand((int)time(NULL));
    for(int i=0;i<5;i++){
        elipse[i] = scene->addEllipse(-200+i*100+rand()%30,10+rand()%30,100,100,blackPen,redBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }
    for(int i=5;i<11;i++){
        elipse[i] = scene->addEllipse((i-5)*100+rand()%30,200+rand()%30,100,100,blackPen,yelloBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }
    for(int i=11;i<19;i++){
        elipse[i] = scene->addEllipse((i-12)*100+rand()%30,400+rand()%30,100,100,blackPen,blueBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }
    for(int i=0;i<40;i++){
        scene->addLine(-1000,-1000+50*i,1000,-1000+50*i,bluePen);
        scene->addLine(-1000+50*i,-1000,-1000+50*i,1000,bluePen);
    }

    rectangle = scene->addRect(100,100,100,100,blackPen,yelloBrush);
    rectangle->setX(100);
    rectangle->setY(100);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);

}

GraphicsTest::~GraphicsTest()
{
    delete ui;
}

void GraphicsTest::on_pushButton_clicked()
{
    ui->graphicsView->rotate(-10);
}

void GraphicsTest::on_pushButton_2_clicked()
{
    ui->graphicsView->rotate(10);
    ui->graphicsView->scale(10,10);
}

void GraphicsTest::on_pushButton_3_clicked()
{

    for(int i=0;i<19;i++){
        qDebug()<<elipse[i]->x()<<" "<<elipse[i]->y()<<endl;
    }

    qDebug()<<rectangle->x()<<" "<<rectangle->y()<<endl;
    qDebug()<<elipse[5]->x()<<" "<<elipse[3]->y()<<endl;
}

void GraphicsTest::on_horizontalSlider_valueChanged(int value)
{
    qreal scale = qPow(qreal(2), (value - 250) / qreal(50));
    ui->graphicsView->scale(scale,scale);
}
