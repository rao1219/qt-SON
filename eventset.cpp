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
    ui->comboBox->addItem("某区域内用户数量突然增大");
    ui->comboBox->addItem("某区域内用户数量突然减小");
    ui->comboBox->addItem("某区域内用户信号突然变差");
    ui->comboBox->addItem("某区域AP的频率异常改变");

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
}
