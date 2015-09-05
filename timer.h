#ifndef TIMER_H
#define TIMER_H
#include <QtCore>
#include <QDebug>

class timer : public QObject
{
    Q_OBJECT
public:
    timer();

    QTimer *_timer;
    void start_timer();
public slots:
    void mySlots();
};

#endif // TIMER_H
