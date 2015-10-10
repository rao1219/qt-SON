#include "introduce.h"
#include "ui_introduce.h"

introduce::introduce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::introduce)
{
    ui->setupUi(this);
}

introduce::~introduce()
{
    delete ui;
}
