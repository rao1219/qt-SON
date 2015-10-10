#ifndef INTRODUCE_H
#define INTRODUCE_H

#include <QDialog>

namespace Ui {
class introduce;
}

class introduce : public QDialog
{
    Q_OBJECT

public:
    explicit introduce(QWidget *parent = 0);
    ~introduce();

private:
    Ui::introduce *ui;
};

#endif // INTRODUCE_H
