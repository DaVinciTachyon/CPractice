#include <stdio.h>
#include <math.h>
#include "Library\askReal.c"
#include "Library\askNat.c"

double g1(double, int);
double g2(double, int);
double g3(double, int);

int main()
{
  double x;
  int a;

  x = askReal();
  a = askNat();

  g1(x, a);
  g2(x, a);
  g3(x, a);

  return 0;
}

double g1(double x, int a)
{
  x = (pow(x, 3) + 8) / 12;
  printf("x = %lf\n", x);
  printf("g1 = %lf approaching 0\n", pow(x, 3) + 12 * x + 8);
  return ((((pow(x, 3) + 12 * x + 8) == 0) || a < 0)?x:g1(x, --a));
}

double g2(double x, int a)
{
  x = exp(x) - 2;
  printf("x = %lf\n", x);
  printf("g2 = %lf approaching x\n", exp(x) - 2);
  return ((exp(x) - 2 == x || a < 0)?x:g2(x, --a));
}

double g3(double x, int a)
{
  x = log(x + 2);
  printf("x = %lf\n", x);
  printf("g3 = %lf approaching x\n", exp(x) - 2);
  return ((exp(x) - 2 == x || a < 0)?x:g3(x, --a));
}
