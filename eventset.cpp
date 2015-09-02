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
    ui->comboBox->addItem("event1");
    ui->comboBox->addItem("event2");
    ui->comboBox->addItem("event3");
    ui->comboBox->addItem("event4");
    ui->comboBox->addItem("event5");
    ui->comboBox->addItem("event6");
    ui->comboBox->addItem("event7");
    ui->comboBox->addItem("event8");
    ui->comboBox->addItem("event9");

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
}
