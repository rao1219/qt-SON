#include "introduce.h"
#include "ui_introduce.h"

introduce::introduce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::introduce)
{
    QPalette bgpal = palette();
    bgpal.setColor (QPalette::Background, QColor (29, 15, 29));
    //bgpal.setColor (QPalette::Background, Qt::transparent);
    bgpal.setColor (QPalette::Foreground, QColor(255,255,255,255));
    setPalette (bgpal);
    ui->setupUi(this);
}

introduce::~introduce()
{
    delete ui;
}
