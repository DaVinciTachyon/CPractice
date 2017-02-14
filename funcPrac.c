#include <stdio.h>
#include <math.h>
#include "Library\askNat.c"

int f(int);

int main()
{

  for (int i = -10; i <= 10; i++)
    printf("f(%3d) =%4d\n", i, f(i));

  int x;

  x = askNat();

  printf("f(%d)\t\t= %6d\nf(f(%d))\t\t= %6d\nf(f(f(%d)))\t= %6d\n", x, f(x), x, f(f(x)), x, f(f(f(x))));

  return 0;
}

int f(int x)
{
  return (pow(x, 2) + 4 * x - 3);
}
