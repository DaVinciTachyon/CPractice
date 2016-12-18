#include <stdio.h>

int main()
{
  int n,
      i,
      f,
      sum;

  printf("How many factorials would you like to add up? (Starting from 0)\n\t");
  scanf("%d",&n);

  for(i = 0, sum = 0; i <= n; i++)
  {
    if(i == 0) f = 1;
    else f *= i;
    sum += f;
  }

  printf("The first %d factorials add up to %d.\n", n, sum);

  return 0;
}
