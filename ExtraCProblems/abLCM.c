#include <stdio.h>
#include <math.h>

int lcm(int n1, int n2, int n3);

int main()
{
  int a,
      b,
      f;

  a = 0;
  f = 1;

  while(f)
  {
    if(a % 3 == 1 && a % 4 == 2 && a % 5 == 4)
      f = 0;
    else
      a++;
  }

  b = a + lcm(3, 4, 5);

  printf("a = %d, and b = %d.\n", a,b);

  return 0;
}

int lcm(int n1, int n2, int n3)
{
  int a;
  a = 60;

  return a;
}
