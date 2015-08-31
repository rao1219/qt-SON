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

private slots:
    void clickevent(int i);

private:
    Ui::self_optimize_set *ui;
    eventButton *event[10];

};

#endif // SELF_OPTIMIZE_SET_H
