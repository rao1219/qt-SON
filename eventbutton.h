#ifndef EVENTBUTTON_H
#define EVENTBUTTON_H


#include <QPushButton>

class eventButton : public QPushButton
{
    Q_OBJECT
public:
    eventButton(QWidget *parent = 0);
    ~eventButton(){return;}
    bool hasEvent;
    void reinit();
    QString eventContent;
    int serious;

protected:
    virtual void enterEvent(QEvent* e);
    virtual void leaveEvent(QEvent* e);
};

#endif // EVENTBUTTON_H
