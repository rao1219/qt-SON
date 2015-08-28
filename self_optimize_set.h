#ifndef SELF_OPTIMIZE_SET_H
#define SELF_OPTIMIZE_SET_H

#include <QDialog>

namespace Ui {
class self_optimize_set;
}

class self_optimize_set : public QDialog
{
    Q_OBJECT

public:
    explicit self_optimize_set(QWidget *parent = 0);
    ~self_optimize_set();

private:
    Ui::self_optimize_set *ui;
};

#endif // SELF_OPTIMIZE_SET_H
