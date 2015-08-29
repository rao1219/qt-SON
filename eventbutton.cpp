#include "eventbutton.h"

eventButton::eventButton(QWidget* parent)
    : QPushButton(parent)
{
    setText("空闲");
    setFixedSize(80, 80);
    setStyleSheet("QPushButton{background: green;}");
}
void eventButton::enterEvent(QEvent* e)
{
    setText("添加事件");
    setStyleSheet("QPushButton{background: orange;}");
}
void eventButton::leaveEvent(QEvent* e)
{
    setText("空闲");
    setStyleSheet("QPushButton{background: green;}");
}
