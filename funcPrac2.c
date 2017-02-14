#include <stdio.h>
#include <math.h>
#include "Library\askReal.c"

double f(double);

int main()
{
  double x;

  x = askReal();

  printf("f(%lf)\t\t= %lf\nf(f(%lf))\t\t= %lf\nf(f(f(%lf)))\t= %lf\n", x, f(x), x, f(f(x)), x, f(f(f(x))));

  return 0;
}

double f(double x)
{
  if(x < 0)
    return pow(x, 2);
  else if(x >= 2)
    return 2*cos(x - 2);
  else
    return x;
}
