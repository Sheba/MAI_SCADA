#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "circle.h"
#include "square.h"
//#include "shape.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    // Массивы окружностей и квадратов
    Circle *circles[50];
    int nCircles;
    Square *squares[50];
    int nSquares;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
