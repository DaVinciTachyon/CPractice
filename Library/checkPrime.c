#include <stdio.h>
#include <math.h>

int checkPrime(int N)
{
  int flag,
      i;

  flag = 0;

  if(N > 1 && N % N == 0 && N % 1 == 0)
  {
    for(i = 2, flag = 1; i <= sqrt(N) && flag == 1; i++)
    {
      if(N % i == 0)
      {
        flag = 0;
      }
    }
  }

  return flag;
}
