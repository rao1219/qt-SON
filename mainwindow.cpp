#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsItem>
#include <QDebug>
#include <stdlib.h>
#include <QMessageBox>
#define RD 0
#define EXTRA 2*R+15
#define DOT 10
#define EXR 5


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QApplication::setStyle("macintosh");

    ui->setupUi(this);
  //  this->setStyleSheet("background-color:gray;");
    this->setMinimumSize(1621,924);
    this->setMaximumSize(1621,924);

    QPen blackPen(Qt::black);
    blackPen.setWidth(0.5);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
   // this->_addLineGraph();
    setYouhua = new self_youhua;
    hasSet=false;
    out = "";
    m=1;n=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::_addLineGraph()
{
    QPen blackPen(Qt::black);
    blackPen.setWidth(0.5);
    for(int i=-200;i<200;i++){
        scene->addLine(-200*(setAlgo->_x)+2*(setAlgo->ratio),i*(setAlgo->_y)+2*(setAlgo->ratio),200*(setAlgo->_x)+2*(setAlgo->ratio),i*(setAlgo->_y)+2*(setAlgo->ratio),blackPen);
        scene->addLine(i*(setAlgo->_x)+2*(setAlgo->ratio),200*(setAlgo->_y)+2*(setAlgo->ratio),i*(setAlgo->_x)+2*(setAlgo->ratio),-200*(setAlgo->_y)+2*(setAlgo->ratio),blackPen);
    }
}

void MainWindow::on_tab_destroyed()
{

}

void MainWindow::on_pushButton_clicked()
{
    this->scene->clear();
    out="自配置\n";
    this->ui->textEdit->setText(out);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QBrush yellowBrush(Qt::yellow);

    QPen blackPen(Qt::black);
    blackPen.setWidth(0.5);
    QPen bluePen(Qt::blue);
    bluePen.setWidth(0.5);
    self_window = new self_set;
    qDebug()<<"hello"<<endl;
    self_window->exec();
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString _time = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
    out=out+_time+"\n";
    this->ui->textEdit->setText(out);

    qDebug()<<this->self_window->_yes;
    setAlgo = new Set_algorithm;
    if(this->self_window->_yes==true){
        this->ui->textEdit->setText(out);
        QString ch = (self_window->choice==1)? "平均SINR最高":"能效比最高";
        out=out+"\n自配置参数预制如下：\n-----------------------\n";
        out=out+"RESP0:"+QString::number(self_window->RESP0)+"\n"+
                "优化标准："+ch+"\n"+
                "路损模型参数：\n"+"a="+QString::number(self_window->a)+"  b="+QString::number(self_window->b)+"\n"
                +"覆盖率:"+QString::number(self_window->coverRate)+"%\n"+
                "额定功率："+QString::number(self_window->power)+"\n"
                +"临界信噪比："+QString::number(self_window->SINR)+"\n"+
                "-----------------------\n自配置开始......\n";

        this->ui->textEdit->setText(out);

        setAlgo->RESP0=self_window->RESP0;
        setAlgo->choice=self_window->choice;
        setAlgo->coverRate=self_window->coverRate;
        setAlgo->power=self_window->power;
        setAlgo->SINR = self_window->SINR;
        setAlgo->a=self_window->a;
        setAlgo->b=self_window->b;

        qDebug()<<out;
        setAlgo->resultPower = setAlgo->getResultPower();

        QString resultPower=QString::number(setAlgo->resultPower)+"\n";
        out=out+resultPower;
        this->ui->textEdit->setText(out);

        for(int i=0;i<setAlgo->apList.size();i++){
            AP *temp = setAlgo->apList.at(i);
            qDebug()<<"x,y:"<<temp->x()<<" "<<temp->y()<<endl;

            if(temp->frequency==1)
                this->scene->addEllipse(temp->x(),temp->y(),(setAlgo->ratio)*EXR,(setAlgo->ratio)*EXR,blackPen,blueBrush);
            else if(temp->frequency==6)
                this->scene->addEllipse(temp->x(),temp->y(),(setAlgo->ratio)*EXR,(setAlgo->ratio)*EXR,blackPen,redBrush);
            else if(temp->frequency==11)
                this->scene->addEllipse(temp->x(),temp->y(),(setAlgo->ratio)*EXR,(setAlgo->ratio)*EXR,blackPen,yellowBrush);
        }
    }
    _addLineGraph();
    setYouhua->default_aplist = setAlgo->apList;
    setYouhua->defalt_ratio = setAlgo->ratio;
    hasSet=true;
    QString result = "配置结果              功率：   "+QString::number(setAlgo->resultPower);
    this->ui->textEdit_2->setText(result+(setAlgo->suboutput));
}

void MainWindow::on_pushButton_2_clicked()
{
    this->scene->clear();
    if(hasSet==false)
    {
        QMessageBox::information(this,"Error!","请先进行自配置！");
    }
    else{
        QBrush redBrush(Qt::red);
        QBrush blueBrush(Qt::blue);
        QBrush yellowBrush(Qt::yellow);

        QPen blackPen(Qt::black);
        blackPen.setWidth(0.5);
        QPen bluePen(Qt::blue);
        bluePen.setWidth(0.5);
        self_organizeWindow = new self_organize;
        self_organizeWindow->exec();

        for(int i=0;i<setYouhua->default_aplist.size();i++){
            AP *temp = setYouhua->default_aplist.at(i);
            qDebug()<<"x,y:"<<temp->x()<<" "<<temp->y()<<endl;

            if(temp->frequency==1)
                this->scene->addEllipse(temp->x(),temp->y(),(setYouhua->defalt_ratio)*EXR,(setYouhua->defalt_ratio)*EXR,blackPen,blueBrush);
            else if(temp->frequency==6)
                this->scene->addEllipse(temp->x(),temp->y(),(setYouhua->defalt_ratio)*EXR,(setYouhua->defalt_ratio)*EXR,blackPen,redBrush);
            else if(temp->frequency==11)
                this->scene->addEllipse(temp->x(),temp->y(),(setYouhua->defalt_ratio)*EXR,(setYouhua->defalt_ratio)*EXR,blackPen,yellowBrush);
        }

        _addLineGraph();
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    graTest = new GraphicsTest;
    graTest->exec();
}

void MainWindow::on_action_2_triggered()
{
    self_organizeWindow = new self_organize;
    self_organizeWindow->exec();
}

void MainWindow::on_action_3_triggered()
{
    self_window = new self_set;
    self_window->exec();
}

void MainWindow::on_action_8_triggered()
{
    self_window = new self_set;
    self_window->exec();
}

void MainWindow::setupMainGraph(int M,int N)
{
    this->_cleanTheList();

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QBrush yellowBrush(Qt::yellow);

    QPen blackPen(Qt::black);
    blackPen.setWidth(0.5);
    QPen bluePen(Qt::blue);
    bluePen.setWidth(0.5);
    srand((int)time(NULL));
    /*
    for(int i=0;i<5;i++){
        elipse[i] = scene->addEllipse(-200+i*100+rand()%30,-110+rand()%30,-100,100,blackPen,redBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }
    for(int i=6;i<11;i++){
        elipse[i] = scene->addEllipse(-200+(i-5)*100+rand()%30,100+rand()%30,-100,100,blackPen,yelloBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }
    for(int i=12;i<19;i++){
        elipse[i] = scene->addEllipse(-200+(i-12)*100+rand()%30,300+rand()%30,-100,100,blackPen,blueBrush);
        elipse[i]->setFlag(QGraphicsItem::ItemIsMovable);
    }

    */


    srand((int)time(NULL));
    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            blue = new QGraphicsEllipseItem;
            blue = scene->addEllipse(2*sqrt(3)*R*i+RD,6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,blueBrush);
            blue->setX(2*sqrt(3)*R*i+RD);
            blue ->setY(6*R*j+RD);
            blueElipse.append(blue);
        }
    }

    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            blue = new QGraphicsEllipseItem;
            blue = scene->addEllipse(-sqrt(3)*R+2*sqrt(3)*R*i+RD,-3*R+6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,blueBrush);
            blue->setX(-sqrt(3)*R+2*sqrt(3)*R*i+RD);
            blue->setY(-3*R+6*R*j+RD);
            blueElipse.append(blue);
        }
    }

    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            red = new QGraphicsEllipseItem;
            red = scene->addEllipse(2*sqrt(3)*R*i+RD,2*R+6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,redBrush);
            red->setX(2*sqrt(3)*R*i+RD);
            red->setY(2*R+6*R*j+RD);
            redElipse.append(red);
        }
    }

    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            red = new QGraphicsEllipseItem;
            red = scene->addEllipse(-sqrt(3)*R+2*sqrt(3)*R*i+RD,-R+6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,redBrush);
            red->setX(-sqrt(3)*R+2*sqrt(3)*R*i+RD);
            red->setY(-R+6*R*j+RD);
            redElipse.append(red);
        }
    }
    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            yellow = new QGraphicsEllipseItem;
            yellow = scene->addEllipse(-sqrt(3)*R+2*sqrt(3)*R*i+RD,R+6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,yellowBrush);
            yellow->setX(-sqrt(3)*R+2*sqrt(3)*R*i+RD);
            yellow->setY(R+6*R*j+RD);
            yellowElipse.append(yellow);
        }
    }

    for(int j=-N;j<=N;j++){
        for(int i=-M;i<=M;i++){
            yellow = new QGraphicsEllipseItem;
            yellow = scene->addEllipse(2*sqrt(3)*R*i+RD,-2*R+6*R*j+RD,2*R+EXTRA,2*R+EXTRA,blackPen,yellowBrush);
            yellow ->setX(2*sqrt(3)*R*i+RD);
            yellow ->setY(-2*R+6*R*j+RD);
            yellowElipse.append(yellow);
        }
    }

    qDebug()<<redElipse.size();

    foreach(QGraphicsEllipseItem *red,redElipse){
        red->setFlag(QGraphicsItem::ItemIsMovable);
        qDebug()<<red->x()<<" "<<red->y()<<endl;
    }

    qDebug()<<blueElipse.size();
    foreach(QGraphicsEllipseItem *blue,blueElipse){
        blue->setFlag(QGraphicsItem::ItemIsMovable);
        qDebug()<<red->x()<<" "<<red->y()<<endl;
    }
    foreach(QGraphicsItem *yellow,yellowElipse){
        yellow->setFlag(QGraphicsItem::ItemIsMovable);
        qDebug()<<yellow->x()<<" "<<yellow->y()<<endl;
    }
    this->_addLineGraph();
}


void MainWindow::on_pushButton_4_clicked()
{
    scene->clear();
    MainWindow::setupMainGraph(m,n);
    m++;n++;
}

void MainWindow::on_pushButton_5_clicked()
{
    scene->clear();
    this->_cleanTheList();
    this->_addLineGraph();
    m=1;n=0;
}

void MainWindow::_cleanTheList()
{
    redElipse.clear();
    yellowElipse.clear();
    blueElipse.clear();
}

void MainWindow::on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint)
{

}

void MainWindow::on_pushButton_6_clicked()
{
    out="";
    ui->textEdit->setText(out);
}

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    double change=value*1.0/100;
    ui->graphicsView->scale(change,change);
}
