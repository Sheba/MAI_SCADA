#include "../include/mainwindow.h"
#include "../include/Elements.h"
#include "../include/button.h"
#include <ctime>

#define rnd(a, b) (a)+random()%((b)-(a))

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{


 QString k="OK", *l;
 l=&k;
 nb=new NumberBox(this);
 //Button * A= new Button(l,this);
 A= new QPushButton(tr("OK"),this);
 QObject::connect(A, SIGNAL(clicked()), this, SLOT(btnclicked()) );
 //connect(nb, SIGNAL(valueChanged(int)), this, SLOT(enableButton(int)));
 nb->show();
 A->show();
 nb->move(230,150);
 A->move(350,150);
 resize(500,200);

}

void MainWindow::btnclicked()
{
 int k=nb->text().toInt();
 nb->clear();
 IntVar *v;
 lib=ConnectToSharedMemory();
 if((v=(IntVar*)lib->Find("circle1_x"))!=0)
 {
  lib->Delete("circle1_x");
  lib->Create("circle1_x", k);
  lib->Save();
 }
 else
 {
  lib->Create("circle1_x",k);
  lib->Save();
 }
 lib->Load();
}
    //return v->getValue();*/

//}

/*MainWindow::enableButton(int k)
{
    A->setEnabled
}*/


MainWindow::~MainWindow()
{
}
void MainWindow::paintEvent(QPaintEvent *)
{
 QPainter p1(this);
 Elem vect;
 vect.Load();
 for(int i=0; i<vect.getNumEl(); i++)
  vect.elem[i]->show(&p1);
}

/*void MainWindow::on_pushButton_clicked()
{
 QPainter p1(this);
 p1.drawEllipse(40, 40, 10, 5);
 QGraphicsScene *gs1 = new QGraphicsScene();
}
*/
