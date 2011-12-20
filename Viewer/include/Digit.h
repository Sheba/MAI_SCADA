//класс для чисел
class DIGIT
{
 double value;

 public:
  DIGIT(){};

  int setDigit(double nDigit)
  {
   value=nDigit;
   return 0;
  }

  double getDigit()
  {
   return value;
  }
};
