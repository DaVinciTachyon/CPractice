#include <stdio.h>
#include <math.h>

int main()
{
  float x,
        y,
        ynew,
        delta,
        diff;

  scanf("%f %f %f", &x, &y, &delta);
  do
  {
    ynew = 1./3.*(2.*y + x/pow(y, 2));
    diff = fabs(ynew - y);
    printf("%f %f\n", ynew, pow(x, 1./3.));
    y = ynew;
  } while(diff >= delta);

  return 0;
}
