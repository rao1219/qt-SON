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
    bool accepted;
    QString eventitem;
    int serious;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::eventSet *ui;
};

#endif // EVENTSET_H
