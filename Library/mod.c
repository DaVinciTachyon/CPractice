#include <stdio.h>
#include <math.h>

double mod(double n, double m)
{
  return (((n/m)-floor(n/m))*n);
}
