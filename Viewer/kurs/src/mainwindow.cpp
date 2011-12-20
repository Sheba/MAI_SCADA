#include "include/mainwindow.h"
#include "include/ui_mainwindow.h"
#include <qpainter.h>
#include <qgraphicsscene.h>
#include "include/Line.h"
//#include "square.h"

#define rnd(a, b) (a)+random()%((b)-(a))
myLine l1;
// = new myLine(rnd(30, 120), rnd(20, 200), rnd(30, 120), rnd(20, 30));

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Здесь, в конструкторе ОКНА, создаём массив окружностей
    QColor c1;
    c1.setRgb(rnd(100, 200), rnd(150, 250), rnd(120, 160));


    //QColor::setRgb()

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p1(this);
    l1.setx1(120);
    l1.sety1(120);
    l1.setx2(200);
    l1.sety2(200);

    //p1.drawEllipse(40, 40, 10, 5);

    //int i;

    // При каждой перерисовке выводим массив окружностей на экран
    //for (i = 0; i< nCircles; i++)
    //    circles[i]->show(&p1);
    l1.show(&p1);
}

/*void MainWindow::on_pushButton_clicked()
{
    QPainter p1(this);
    p1.drawEllipse(40, 40, 10, 5);
    QGraphicsScene *gs1 = new QGraphicsScene();
}*/
