#ifndef SELF_OPTIMIZE_SET_H
#define SELF_OPTIMIZE_SET_H

#include <QDialog>
#include "eventbutton.h"
#include "eventset.h"

namespace Ui {
class self_optimize_set;
}

class self_optimize_set : public QDialog
{
    Q_OBJECT

public:
    explicit self_optimize_set(QWidget *parent = 0);
    ~self_optimize_set();
    eventSet *eventwindow;
    int currentEvent;
    eventButton *event[10];

private slots:
    void clickevent_1();
    void clickevent_2();
    void clickevent_3();
    void clickevent_4();
    void clickevent_5();
    void clickevent_6();
    void clickevent_7();


private:
    Ui::self_optimize_set *ui;


};

#endif // SELF_OPTIMIZE_SET_H
