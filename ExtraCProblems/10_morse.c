#include <stdio.h>
#include <math.h>

int fac(int);

int main()
{
  int n, i,
      dots, num, facN,
      numDots[10] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1};

  printf("Give me an n:\n\t");
  scanf("%d", &n);

  dots = 0;
  i = 0;
  facN = fac(n);

  do
  {
    num = (int)(facN / pow(10, i)) % 10;
    dots += numDots[num];
    i++;
  } while(facN > pow(10, i));

  printf("The number of dots in the Morse code representation of %d! is %d.\n", n, dots);
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
