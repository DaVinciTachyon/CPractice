/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>
#include <math.h>

#define N 600851475143

int main()
{
  unsigned long long i;
  int flag,
      j;

  for(i = (int)(sqrt(N) + 0.5); i > 0; i--)
  {
    printf("i = %d\n", i);
    if(i % i == 0 && i % 1 == 0 && i > 1)
    {
      flag = 1;
      for(j = 2; j < sqrt(i); j++)
      {
        if(i % j == 0)
        {
          flag = 0;
          break;
        }
      }
      if(flag && N % i == 0)
      {
        break;
      }
    }
  }

  printf("The highest factor is %d\n", i);

  return 0;
}
