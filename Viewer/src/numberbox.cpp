#include "../include/numberbox.h"
#include <QValidator>

NumberBox::NumberBox(QWidget *parent) :
    QLineEdit(parent)
{
    QIntValidator *ivl = new QIntValidator(this);
    setValidator(ivl);
}
