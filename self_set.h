#ifndef SELF_SET_H
#define SELF_SET_H

#include <QDialog>
#include<QFrame>

namespace Ui {
class self_set;
}

class self_set : public QDialog
{
    Q_OBJECT

public:
    explicit self_set(QWidget *parent = 0);
    ~self_set();
    int power;
    bool _yes;
    double PARAMETER_A;
    double PARAMETER_B;
    int RESP0;
    int coverRate;
    int choice;
    double SINR;
    double a,b;

private slots:
    void on_buttonBox_accepted();

    void on_self_set_accepted();

    void on_horizontalSlider_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::self_set *ui;
    QPushButton *colorBtn;
    QFrame *colorFrame;
};



#endif // SELF_SET_H
