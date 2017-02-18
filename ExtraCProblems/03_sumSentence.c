#include <stdio.h>
#define N 10

int main()
{

  int   a, z, A, Z, i, is[N], sum, isa[N], isA[N];
  char  s[N];

  a = (int) ('a');
  z = (int) ('z');
  A = (int) ('A');
  Z = (int) ('Z');

  printf("Tell me something:\n\t");
  scanf("%s",&s);

  for(i = 0, sum = 0; i < N - 1; i++)
  {
    is[i] = (int) (s[i]);
    if(is[i] >= a && is[i] <= z)
    {
      isa[i]= is[i] - a + 1;
      sum += isa[i];
    }
    else if(is[i] >= A && is[i] <= Z)
    {
      isA[i]= is[i] - A + 1;
      sum += isA[i];
    }
  }

  printf("The sum value of all the letters is %d.\n", sum);
}
