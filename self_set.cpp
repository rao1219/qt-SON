#include "self_set.h"
#include "ui_self_set.h"
#include <QColorDialog>
#include <QWidget>

self_set::self_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::self_set)
{
    ui->setupUi(this);
   // this->setStyleSheet("background-color:gray;");
    this->setStyleSheet("color:white;");
    this->_yes=false;
    /*
    QPalette palette = ui->PARAMETERA->palette();
     palette.setBrush(QPalette::Background,QBrush(Qt::red));
     ui->PARAMETERA->setPalette(palette);
     ui->PARAMETERA->setAutoFillBackground(true);
    */

    //注意要先调用setAutoFillBackground
    ui->line->setAutoFillBackground(true);
    QPalette palette;
    //设置QTextEdit文字颜色
    palette.setBrush(QPalette::Active, QPalette::Text, QBrush(Qt::yellow));
    //设置QTextEdit背景色
    palette.setBrush(QPalette::Active, QPalette::Base, QBrush(Qt::red));
    ui->line->setPalette(palette);
    ui->label_4->setToolTip("testtool");
    ui->label->setToolTip("基站在使用中可以调到的最大功率");
    ui->label_2->setToolTip("满足用户正常通信的最小信号强度，当信号小于这个值时，用户不能正常通信，不同的业务有着不同的最小信号强度");
    ui->label_14->setToolTip("满足用户正常通信的最小信干比");
    ui->label_15->setToolTip("接收信号强度/干扰信号强度");
    ui->label_11->setToolTip("可以通信区域的面积/总区域的面积");
    ui->radioButton->setToolTip("整个区域的平均SINR最小");
    ui->radioButton_2->setToolTip("能效比=S/P和");
}

self_set::~self_set()
{
    delete ui;
}

void self_set::on_buttonBox_accepted()
{
    this->power=(ui->spinBox->value());
    this->PARAMETER_A=ui->PARAMETERA->value();
    this->PARAMETER_B=ui->PARAMETERB->value();
    this->RESP0=ui->RSRP0->value();
    this->choice=(ui->radioButton->isChecked())?1:2;
    this->coverRate = ui->COVERRATE->value();
    this->SINR =  ui->SINRSPIN->value();
    this->a=ui->PARAMETERA->value();
    this->b=ui->PARAMETERB->value();
    this->_yes=true;
}

void self_set::on_self_set_accepted()
{

}


void self_set::on_dial_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void self_set::on_horizontalSlider_valueChanged(int value)
{

}

void self_set::on_lineEdit_textChanged(const QString &arg1)
{
    ui->dial->setValue(arg1.toInt());
}

void self_set::on_spinBox_valueChanged(int arg1)
{
    ui->dial->setValue(arg1);
}

void self_set::on_pushButton_clicked()
{
    ui->COVERRATE->setValue(95);
    ui->PARAMETERA->setValue(20);
    ui->PARAMETERB->setValue(32.4);
    ui->spinBox->setValue(50);
    ui->RSRP0->setValue(-85);
    ui->SINRSPIN->setValue(10.00);
}
