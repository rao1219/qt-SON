#include "timer.h"
#include <QtCore>
#include <QDebug>

timer::timer()
{
    _timer =  new QTimer();
    connect(_timer,SIGNAL(timeout()),this,SLOT(mySlots()));
    qDebug()<<"timer start";

}

void timer::mySlots()
{
    QTextStream qout(stdout);
    switch(eventType)
    {
    case 0:
        qout << "\033[0;32m"+eventContent+"\033[0;0m\n";
        break;
    case 1:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        break;
    case 2:
        qout<< "\033[0;34m"+eventContent+"\033[0;0m\n";
        break;
    case 3:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        break;
    case 4:
        qout<< "\033[0;31m"+eventContent+"\033[0;0m\n";
        break;

    }
   // qDebug()<<"\033[32m"+eventContent;

}

void timer::start_timer()
{
    _timer->start(6000);
}
