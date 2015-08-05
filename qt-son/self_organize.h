#ifndef SELF_ORGANIZE_H
#define SELF_ORGANIZE_H

#include <QDialog>

namespace Ui {
class self_organize;
}

class self_organize : public QDialog
{
    Q_OBJECT

public:
    explicit self_organize(QWidget *parent = 0);
    ~self_organize();

private:
    Ui::self_organize *ui;
};

#endif // SELF_ORGANIZE_H
