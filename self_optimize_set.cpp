#include "self_optimize_set.h"
#include "ui_self_optimize_set.h"

self_optimize_set::self_optimize_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::self_optimize_set)
{
    ui->setupUi(this);
}

self_optimize_set::~self_optimize_set()
{
    delete ui;
}
