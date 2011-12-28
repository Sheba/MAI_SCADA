#include <QtGui/QApplication>
#include "../include/mainwindow.h"

int main(int argc, char *argv[])
{
 QApplication a(argc, argv);
 MainWindow w;
 w.lib=new Library;
 w.lib=MkSM();
 w.lib->Load();
 w.show();
 return a.exec();
}
