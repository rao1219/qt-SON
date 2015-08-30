#ifndef EVENTSET_H
#define EVENTSET_H

#include <QDialog>

namespace Ui {
class eventSet;
}

class eventSet : public QDialog
{
    Q_OBJECT

public:
    explicit eventSet(QWidget *parent = 0);
    ~eventSet();

private:
    Ui::eventSet *ui;
};

#endif // EVENTSET_H
