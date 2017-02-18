#include <stdio.h>
#include <math.h>

int main()
{
  double x;
  int n,
      i,
      sum;

  printf("What would you like x to be for f(x) = cos(x)?\n\t");
  scanf("%lf", &x);
  do
  {
    printf("How many digits of cos(x) would you like to sum?\n\t");
    scanf("%d", &n);
  } while(n < 0);

  for (i = 0, sum = 0; i < n; i++)
  {
    sum += (int)(fabs(cos(x)) * pow(10, i)) % 10;
    printf("%d + ", (int)(fabs(cos(x)) * pow(10, i)) % 10);
  }
  printf(" = %lf\n", cos(x));

  printf("The sum of the first %d digits of f(%lf) = cos(%lf) is %d.\n", n, x, x, sum);
  return 0;
}
