#include "ap.h"
#include <math.h>
#include <QPainter>


AP::AP(QGraphicsItem *parent) :QGraphicsItem (parent)
{
    this->unsatisfiedNum=0;
    this->totalUser=0;
    this->total_wifiSpeed=2.0;
}

void AP::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->drawEllipse(100,100,100);
    painter->setBrush(Qt::red);
    painter->drawRect(0,0,20,20);
}

QRectF AP::boundingRect() const
{
    qreal penWidth=1;
    return QRectF(0-penWidth/2,0-penWidth/2,20+penWidth,20+penWidth);

}


