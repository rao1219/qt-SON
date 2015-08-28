#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <self_set.h>
#include <graphicstest.h>
#include <QListWidgetItem>
#include <math.h>
#include "ap.h"
#include "dot.h"
#include "set_algorithm.h"
#include "self_youhua.h"
#include "self_optimize_set.h"

#define R 30
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    self_set *self_window;
    self_optimize_set *self_organizeWindow;
    GraphicsTest *graTest;
    bool hasSet;

private slots:
    void on_tab_destroyed();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_8_triggered();

    void on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint);

    void on_pushButton_4_clicked();
    void setupMainGraph(int m,int n);
    void _addLineGraph();
    void _cleanTheList();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_horizontalScrollBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *red;
    QGraphicsEllipseItem *blue;
    QGraphicsEllipseItem *yellow;

    int m,n;
    QString out;
    Set_algorithm *setAlgo;
    self_youhua *setYouhua;

    QList<QGraphicsEllipseItem *> redElipse;
    QList<QGraphicsEllipseItem *> blueElipse;
    QList<QGraphicsEllipseItem *> yellowElipse;


    QGraphicsRectItem *rectangle;
};

#endif // MAINWINDOW_H
