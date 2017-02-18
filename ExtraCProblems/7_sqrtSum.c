#include <stdio.h>
#include <math.h>

int main()
{
  int i,
      n;
  double sum;

  printf("What would you like n to be? ");
  scanf("%d",&n);

  for(i = 1, sum = 0; i <= n; i++)
  {
    sum += sqrt(i);
  }

  printf("The square root of the sum of the square roots of the first %d natural numbers is %lf\n", n, sqrt(sum));
  return 0;
}
