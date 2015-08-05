#ifndef GRAPHICSTEST_H
#define GRAPHICSTEST_H

#include <QDialog>
#include<QtCore>
#include<QtGui>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>

namespace Ui {
class GraphicsTest;
}

class GraphicsTest : public QDialog
{
    Q_OBJECT

public:
    explicit GraphicsTest(QWidget *parent = 0);
    ~GraphicsTest();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::GraphicsTest *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *elipse[19];
    QGraphicsRectItem *rectangle;
};

#endif // GRAPHICSTEST_H
