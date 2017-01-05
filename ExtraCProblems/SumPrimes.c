#include <stdio.h>

int main()
{
  int n,
      i,
      j,
      k,
      p,
      f,
      sum;

  printf("How many primes would you like to add up? ");
  scanf("%d", &n);

  for(i = 0, p = 0, sum = 0; i < n; i++)
  {
    j = p + 1;
    do
    {
      f = 0;
      if(j > 1 && j % j == 0 && j % 1 == 0)
      {
        for(k = 2; k < j; k++)
        {
          if(j % k == 0)
            f = 1;
        }
      }
      if(f == 0)
        p = j;
      else
        j++;
    }while(f == 1);
    sum += p;
  }

  printf("The sum of the first %d primes is %d.\n", n, sum);
  return 0;
}
