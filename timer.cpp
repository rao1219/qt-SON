#include "timer.h"
#include <QtCore>
#include <QDebug>

timer::timer()
{
    _timer =  new QTimer();
    connect(_timer,SIGNAL(timeout()),this,SLOT(mySlots()));
    qDebug()<<"timer start";

}

void timer::mySlots()               //还需要加入相应的处理模块
{
    QTextStream qout(stdout);
    switch(eventType)
    {
    case 0:
        qout << "\033[0;32m"+eventContent+"\033[0;0m\n";
        qDebug()<<"负载增大，触发容量自配置";
        // here+自优化
        break;
    case 1:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        qDebug()<<"负载减小，触发容量自配置";
        break;
    case 2:
        qout<< "\033[0;34m"+eventContent+"\033[0;0m\n";
        qDebug()<<"触发欠覆盖自优化";
        break;
    case 3:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        qDebug()<<"触发频率自配置";
        break;
    case 4:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        qDebug()<<"触发容量自配置";
        break;

    }
   // qDebug()<<"\033[32m"+eventContent;

}

void timer::start_timer()
{
    _timer->start(6000);
}
