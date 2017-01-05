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
    int i,
        k,
        a,
        b,
        l,
        c,
        f;

    i = 1;
    f = 1;

    while (f)
    {
      a = n1 * i;
      k = 1;
      while(b <= a)
      {
        b = n2 * k;
        if(a == b)
        {
          l = 1;
          while(c <= b)
          {
            c = n3 * l;
            if(b == c)
            {
              f = 0;
            }
            l++;
          }
        }
        k++;
      }
      i++;
    }

    return a;
}
