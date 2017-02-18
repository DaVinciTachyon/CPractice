#include <stdio.h>
#include "checkPrime.c"

int numPrime(int n)
{
  int p, //Prime indicator
      m, //Counter for n
      i; //Counter

  m = 0;
  i = 0;

  if (n <= 0)
    return -1;
  else
  {
    while(m < n) //Repeats for requested amount of prime numbers
    {
      do
      {
        p = checkPrime(i);
        i++;
      } while(!p);
      m++;
    }
    return --i;
  }
}
