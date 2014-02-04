#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qpainter.h>
#include <qgraphicsscene.h>
#include <QMainWindow>
#include "../VarBase/include/basecode.h"
#include "../include/numberbox.h"
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
  Library *lib;
  explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:
    QPushButton *A;
    NumberBox *nb;

private slots:
    void btnclicked();
    //void enableButton(int);
};

#endif // MAINWINDOW_H
