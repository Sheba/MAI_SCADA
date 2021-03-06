#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include <qpainter.h>
#include <qgraphicsscene.h>
#include "include/circle.h"
#include "include/square.h"
#include "include/numberbox.h"

#define rnd(a, b) (a)+random()%((b)-(a))

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    NumberBox *l=new NumberBox(this);
    l->show();
    l->move(230,150);
    resize(400,200);
    // Здесь, в конструкторе ОКНА, создаём массив окружностей
    QColor c1;
    nCircles = 0;
    while (nCircles<24)
    {
        c1.setRgb(rnd(100, 200), rnd(150, 250), rnd(120, 160));
        nCircles++;
        circles[nCircles-1] = new Circle(nCircles*2, rnd(20, 200), rnd(30, 120), rnd(20, 30), c1);
    }
    //QColor::setRgb()

}

MainWindow::~MainWindow()
{
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p1(this);
    //p1.drawEllipse(40, 40, 10, 5);

    int i;

    // При каждой перерисовке выводим массив окружностей на экран
    for (i = 0; i< nCircles; i++)
        circles[i]->show(&p1);
}

void MainWindow::on_pushButton_clicked()
{
    QPainter p1(this);
    p1.drawEllipse(40, 40, 10, 5);
    QGraphicsScene *gs1 = new QGraphicsScene();
}
