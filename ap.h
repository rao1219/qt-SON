#ifndef AP_H
#define AP_H
#include <QGraphicsItem>

class AP : public QGraphicsItem
{
public:
    AP(QGraphicsItem *parent=0);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,
                   QWidget *widget);
    QRectF boundingRect() const;
    int power;
    int frequency;
private:
    struct position{
        int x,y;
    };

};

#endif // AP_H
