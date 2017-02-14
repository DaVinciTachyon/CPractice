#include <stdio.h>

void displayIfPrime(int N, int flag)
{
  if(flag == 1)
    printf("%d is a prime\n", N);
  if(flag == 0)
    printf("%d is not a prime\n", N);
}
