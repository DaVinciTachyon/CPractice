#include <stdio.h>
#include <math.h>

void sumN(int);
void sumN2(int);
void sumN3(int);

int main()
{
  int n;
  do
  {
    printf("Give me a positive integer value of n:\n\t");
    scanf("%d", &n);
  } while(n < 0);

  sumN(n);
  sumN2(n);
  sumN3(n);

  return 0;
}

void sumN(int n)
{
  int i,
      sum;

  for(i = 0, sum = 0; i <= n; i++)
    sum += i;

  printf("sumN = %d\n", sum);
}

void sumN2(int n)
{
  int i;
  double sum;

  for(i = 1, sum = 0; i <= n; i++)
    sum += pow(i, -2);

  printf("sumN2 = %lf\n", sum);
}

void sumN3(int n)
{
  int i;
  double sum;

  for(i = 1, sum = 0; i <= n; i++)
    sum += n * (n + 1) / 2;

  printf("sumN2 = %lf\n", sum);
}
