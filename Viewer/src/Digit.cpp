#include "../include/Digit.h"
#include <iostream>
#include <qtextstream.h>

using namespace std;
int Digit::setDigit(double nDigit)
{
 value=nDigit;
 return 0;
}

double Digit::getDigit()
{
 return value;
}
 
QString Digit::show()
{
 QString a;
 QTextStream str(&a);
 str<<value;
 return a;
}
