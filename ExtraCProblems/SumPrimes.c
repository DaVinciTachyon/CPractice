#include <stdio.h>
#include <math.h>

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
    while(m<n) //Repeats for requeted amount of prime numbers
    {
      p = 1;
      while (p) //Finds the next prime
      {
        if(j % 1 == 0 && j % j == 0 && j > 1) //Is it a potential prime, satisfies positive cases
        {
          p = 0;
          for (i = 2; i <= sqrt(j); i++) //Searches for factors between 2 and j - 1, gets rid of negative cases
          {
            if (j % i == 0) //If a potential factor is divisible by j, it is not a prime number, Checks the negative case
            {
              p = 1;
            }
          }
        }
        if(p == 0) sum += j;
        j++;
      }
      m++;
    }
  }

  printf("The sum of the first %d primes is %d.\n", n, sum);

  return 0;
}
