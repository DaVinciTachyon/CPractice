#include <stdio.h>
#include <math.h>
#include "Library\checkPrime.c"

int askNumPrimes();
void displayPrimes(int);

int main()
{
  int n; //Number of Primes

  n = askNumPrimes();

  displayPrimes(n);

  return 0;
}

int askNumPrimes()
{
  int n;

  printf("How many primes do you want to see? ");
  scanf("%d",&n);

  return n;
}

void displayPrimes(int n)
{
  int m,
      p,
      j;

  m = 0;
  j = 0;

  if (n <= 0) printf("That cannot be done.");
  else while(m<n) //Repeats for requested amount of prime numbers
  {
    //Finds the next prime
    do
    {
      p = checkPrime(j);
      if(p)
        printf("%d, ", j); //Prints the prime
      j++;
    } while (!p);
    m++;
  }
  printf("\n");
}
