#include <stdio.h>
#include <math.h>
#include "C:\Users\Admin\Documents\Github\CPractice\checkPrime.c"

int main()
{
  int n, //Number of Primes
      p, //Prime indicator
      m, //Counter for n
      i, //Counter
      j, //Counter
      sum;

  sum = 0;
  m = 0;
  j = 0;
  printf("How many primes would you like to add up? ");
  scanf("%d", &n);

  if (n > 0)
  {
    while(m < n) //Repeats for requeted amount of prime numbers
    {
      //Finds the next prime
      do
      {
        p = checkPrime(j);
        if(p)
          sum += j;
        j++;
      } while (!p);
      m++;
    }
  }

  printf("The sum of the first %d primes is %d.\n", n, sum);

  return 0;
}
