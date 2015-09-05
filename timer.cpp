#include "timer.h"
#include <QtCore>
#include <QDebug>

timer::timer()
{
    _timer =  new QTimer();
    connect(_timer,SIGNAL(timeout()),this,SLOT(mySlots()));
    qDebug()<<"time here";

}

void timer::mySlots()
{
    qDebug()<<"timer excutted";
}

void timer::start_timer()
{
    _timer->start(1000);
}
