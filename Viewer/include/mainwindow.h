#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "circle.h"
#include "square.h"
#include "Line.h"
#include "String.h"
//#include "shape.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:
    // Массивы окружностей и квадратов
    Circle *circles[50];
    int nCircles;
    Square *squares[50];
    int nSquares;
    //экземпляры Линии и Строки
    Line l1;
    String s1;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
