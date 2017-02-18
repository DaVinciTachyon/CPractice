#include <stdio.h>
#include <stdlib.h>
#include "mathPractice.h"

double divide(int M)
{
  double  sum,
          n[2];

  do
  {
    n[1] = (int)rand() % (M + 1);
    n[0] = (int)rand() % (int)(n[1] * n[1] + 1);
    sum = n[0] / n[1];
  } while(modulus(sum, 1) != 0);
  printf("%.0lf ÷ %.0lf:\n\t\t", n[0], n[1]);

  return sum;
}
