#include "eventbutton.h"

eventButton::eventButton(QWidget* parent)
    : QPushButton(parent)
{
    setText("");
    setFixedSize(80, 80);
    setStyleSheet("QPushButton{background: yellow;}");
}
void eventButton::enterEvent(QEvent* e)
{
    setText("添加事件");
    setStyleSheet("QPushButton{background: orange;}");
}
void eventButton::leaveEvent(QEvent* e)
{
    setText("");
    setStyleSheet("QPushButton{background: yellow;}");
}
