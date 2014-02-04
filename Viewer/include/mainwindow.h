#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qpainter.h>
#include <qgraphicsscene.h>
#include <QMainWindow>
//#include "../Viewer/include/circle.h"
//#include "../Viewer/include/square.h"
//#include "../Viewer/include/Line.h"
//#include "../Viewer/include/String.h"
#include "../VarBase/include/basecode.h"
//#include "shape.h"
//#include "../Viewer/include/IntDigit.h"
//#include "../Viewer/include/DoubleDigit.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
  Library *lib;
  explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:
    //key_t SHMKey;
    // Массивы окружностей и квадратов
    //Circle *circles[50];
    //int nCircles;
    //Square *squares[50];
    //int nSquares;

    //экземпляры Линии и Строки


private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
