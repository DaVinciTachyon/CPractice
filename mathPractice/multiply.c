#include <stdio.h>
#include <stdlib.h>

double multiply(int M, int SIZE)
{
  int j;
  double  sum,
          n[SIZE];

  for(j = 0, sum = 1; j < SIZE; j++)
  {
    n[j] = (int)rand() % (M + 1);
    sum *= n[j];
    printf("%.0lf", n[j]);
    if(j == SIZE - 1)
      printf(":\n\t\t");
    else
      printf(" * ");
  }

  return sum;
}
