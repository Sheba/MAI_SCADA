#ifndef BUTTON_H
#define BUTTON_H
//#include<QtGui>
#include <QPushButton>
#include <QString>

class Button: public QPushButton
{
 Q_OBJECT


 public:
 // QPushButton *B;
    Button(const QString *, QWidget *);
 private slots:
  //void btnClicked();
};

#endif // BUTTON_H

