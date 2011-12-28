#include "../include/mainwindow.h"
//#include "ui_mainwindow.h"
#include "../include/circle.h"
#include "../include/square.h"
#include "../include/numberbox.h"
#include "../include/Line.h"
#include "../include/String.h"
#include "../include/IntDigit.h"
#include "../include/DoubleDigit.h"
#include <ctime>

#define rnd(a, b) (a)+random()%((b)-(a))

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
 NumberBox *l=new NumberBox(this);
 l->show();
 l->move(230,150);
 resize(400,200);
 // Здесь, в конструкторе ОКНА, создаём массив окружностей
 //QColor c1;
 //nCircles = 0;
 //while (nCircles<24)
 //{
 //c1.setRgb(rnd(100, 200), rnd(150, 250), rnd(120, 160));
 // nCircles++;
 // circles[nCircles-1] = new Circle(nCircles*2, rnd(20, 200), rnd(30, 120), rnd(20, 30), c1);
 //}
    //QColor::setRgb()

}

MainWindow::~MainWindow()
{
}

void MainWindow::paintEvent(QPaintEvent *)
{
 /* сейчас здесь банальный тест работы модулей
    если кто додумается какого хрена double не выводит дробную часть - исправьте пожалуйста
 */


 Line l1("line1_x1", 70, "line1_y1", 100, "line1_x2", 150, "line1_y2", 250, "YELLOW");
 String str1("string1", "String проверка !№;%:?*");
 IntDigit d1("d1",128);
 DoubleDigit d2("d2", 312.12);
 Square sq1("square1_x", 20, "square1_y", 20, "square1_a", 20, "RED");
 Circle cr1("circle1_x", 160, "circle1_y", 90, "circle1_r", 25, "GREEN");
 QPainter p1(this);
    //p1.drawEllipse(40, 40, 10, 5);

    //int i;

    // При каждой перерисовке выводим массив окружностей на экран
    //for (i = 0; i< nCircles; i++)
    //    circles[i]->show(&p1);
    //l1.setx1(120);
    //l1.sety1(120);
    //l1.setx2(200);
    //l1.sety2(200);
    //l1.setcolor(0);
 l1.show(&p1);
 sq1.show(&p1);
 cr1.show(&p1);
    //s1.setData("Test по-русски");
    //s1.setX(200);
    //s1.setY(120);
 str1.show(&p1, 100, 50);
 d1.show(&p1, 100, 120);
 d2.show(&p1, 50, 100);
    //p1.drawText (200, 120, s1.show());
    //p1.drawText (100, 120, d1.show());
}

void MainWindow::on_pushButton_clicked()
{
 QPainter p1(this);
 p1.drawEllipse(40, 40, 10, 5);
 QGraphicsScene *gs1 = new QGraphicsScene();
}
