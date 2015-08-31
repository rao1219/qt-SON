#include "eventset.h"
#include "ui_eventset.h"

eventSet::eventSet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eventSet)
{
    ui->setupUi(this);
    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (29, 15, 29));
    //bgpal.setColor (QPalette::Background, Qt::transparent);
    bgpal.setColor (QPalette::Foreground, QColor(255,255,255,255));
    setPalette (bgpal);
    this->accepted=false;
}

eventSet::~eventSet()
{
    delete ui;
}

void eventSet::on_buttonBox_accepted()
{
    this->accepted=true;
}
