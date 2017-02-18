#include <stdio.h>
#include <stdlib.h>
#include "mathPractice.h"

double question(int i)
{
  double sum;

  printf("Question %d:\n\t", i);
  switch((int)rand() % 4)
  {
    case 0:
      sum = add(50, 2);
      break;
    case 1:
      sum = subtract(50, 2);
      break;
    case 2:
      sum = multiply(13, 2);
      break;
    case 3:
      sum = divide(13);
      break;
  }

  return sum;
}
