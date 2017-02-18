#include <stdio.h>

int fac(int n)
{
  int sum;
  
  sum = 1;
  
  while(n > 0)
  {
    sum *= n;
    n--;
  }
  
  return sum;
}
