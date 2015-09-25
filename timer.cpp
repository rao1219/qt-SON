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
    qDebug()<<eventContent;
}

void timer::start_timer()
{
    _timer->start(6000);
}
