/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include <stdio.h>

#define N 20
#define N 1

int main()
{
  int i,
      j,
      flag;

  i = 0;
  flag = 1;

  while(flag)
  {
    i+=N;
    printf("i = %d\n", i);
    flag = 0;
    for(j = M; j <= N; j++)
    {
      if(i % j != 0)
      {
        flag = 1;
        break;
      }
    }
  }

  printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d\n", i);

  return 0;
}
