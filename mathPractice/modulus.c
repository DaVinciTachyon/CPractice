#include <stdio.h>
#include <math.h>

double modulus(double n, double m)
{
  return (((n/m)-floor(n/m))*n);
}
