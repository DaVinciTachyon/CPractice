#include <stdio.h>
int main()
{
  int n, //Number of Primes
      p, //Prime indicator
      m, //Counter for n
      i, //Counter
      j; //Counter

  m = 0;
  j = 2; //Using 2 as a starting point for prime numbers, A prime number has exactly two factors, and is a Natural number > 1
  printf("Which prime do you want to see? ");
  scanf("%d",&n);

  if (n <= 0) printf("That cannot be done.");
  else while(m<n) //Repeats for requeted amount of prime numbers
  {
    p = 0;
    while (p == 0) //Finds the next prime
    {
      if(j % 1 == 0 && j % j == 0 && j > 1) //Is it a potential prime, satisfies positive cases
        {
          p = 1;
          for (i = 2; i < (j+2)/2; i++) //Searches for factors between 2 and j - 1, gets rid of negative cases
          {
            if (j % i == 0) //If a potential factor is divisible by j, it is not a prime number, Checks the negative case
            {
              p = 0;
            }
          }
        }
      j++;
    }
    m++;
  }
  if(n==1) printf("The %dst prime is %d.",n,--j);
  else if(n==2) printf("The %dnd prime is %d.",n,--j);
  else if(n==3) printf("The %drd prime is %d.",n,--j);
  else printf("The %dth prime is %d.",n,--j);

  printf("\n");

  return 0;
}
