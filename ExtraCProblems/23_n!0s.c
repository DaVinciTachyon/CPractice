#include <stdio.h>
#include <math.h>

int fac(int);

int main()
{
  int n,
      num,
      zeros,
      facN,
      i;

  printf("Give me an n:\n\t");
  scanf("%d", &n);

  facN = fac(n);
  i = 0;
  zeros = 0;

  do
  {
    num = (int)(facN / pow(10, i)) % 10;
    if(num == 0)
      zeros++;
    i++;
  } while(facN > pow(10, i));

  if(zeros == 1)
    printf("There is 1 zero in %d!\n", n);
  else
    printf("There are %d zeros in %d!\n", zeros, n);

  return 0;
}

int fac(int n)
{
  int sum;

  sum = 1;

  while(n > 0)
  {
    sum *= n;
    n--;
  }

  return sum;
}
