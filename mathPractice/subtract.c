#include <stdio.h>
#include <stdlib.h>

double subtract(int N, int SIZE)
{
  int j;
  double  sum,
          n[SIZE];

  sum = n[0] = (int)rand() % (N + 1);
  printf("%.0lf", n[0]);
  if(SIZE == 1)
    printf(":\n\t\t");
  else
  {
    printf(" - ");
    for(j = 1; j < SIZE; j++)
    {
      n[j] = (int)rand() % (N + 1);
      sum -= n[j];
      printf("%.0lf", n[j]);
      if(j == SIZE - 1)
        printf(":\n\t\t");
      else
        printf(" - ");
    }
  }

  return sum;
}
