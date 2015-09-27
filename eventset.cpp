#include "eventset.h"
#include "ui_eventset.h"
#include <QDebug>

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
    ui->comboBox->addItem("User number increases suddenly in some area.");
    ui->comboBox->addItem("User number decreases suddenly in some area.");
    ui->comboBox->addItem("Signals dies away suddenly in some area.");
    ui->comboBox->addItem("AP's frequency changes suddenly in some area");

    ui->comboBox_2->addItem("轻微");
    ui->comboBox_2->addItem("正常");
    ui->comboBox_2->addItem("严重");

}

eventSet::~eventSet()
{
    delete ui;
}

void eventSet::on_buttonBox_accepted()
{
    this->accepted=true;
    this->eventitem=ui->comboBox->currentText();
    this->serious=ui->comboBox_2->currentIndex();
    this->eventType=ui->comboBox->currentIndex();

}
