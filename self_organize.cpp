#include "self_organize.h"
#include "ui_self_organize.h"

self_organize::self_organize(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::self_organize)
{
    ui->setupUi(this);
}

self_organize::~self_organize()
{
    delete ui;
}

void self_organize::on_buttonBox_accepted()
{

}
