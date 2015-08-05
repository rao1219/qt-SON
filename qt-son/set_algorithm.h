#ifndef SET_ALGORITHM_H
#define SET_ALGORITHM_H
#include "ap.h"
#include "dot.h"
#include <QList>

class Set_algorithm
{
public:
    Set_algorithm();
    int power;
    int RESP0;
    int coverRate;
    int choice;
    double _x,_y;
    double a,b;
    double SINR;
    QList<AP *> apList;
    QList<AP *> redList;
    QList<AP *> yellowList;
    QList<AP *> blueList;
    AP * newAP;
    double ratio;
    double resultEEr;

    double getResultPower();
    double getD0(double a,double b,double SINR,int RESP0,int power);
    double getL0();
private:
    double resultPower;
    double d0;
    double l0;

};

#endif // SET_ALGORITHM_H
