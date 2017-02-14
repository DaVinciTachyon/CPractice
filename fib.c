#include <stdio.h>

int main()
{
  double  xn,
          xnm1,
          xnm2;
  int i;

  xnm2 = 0;
  printf("%.0lf\n", xnm2);
  xnm1 = 1;
  printf("%.0lf\n", xnm1);

  for(i = 3; i <= 50; i++)
  {
    xn = xnm1 + xnm2;
    printf("%.0lf\n", xn);
    xnm2 = xnm1;
    xnm1 = xn;
  }

  return 0;
}
