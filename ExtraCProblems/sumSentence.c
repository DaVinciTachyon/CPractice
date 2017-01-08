#include <stdio.h>
#define N 5

int main()
{

  int   ia,
        iz,
        iA,
        iZ,
        i,
        is[N],
        sum,
        isa[N],
        isA[N];
  char  a,
        z,
        A,
        Z,
        s[N];

  a = 'a';
  ia = (int) (a);
  z = 'z';
  iz = (int) (z);
  A = 'A';
  iA = (int) (A);
  Z = 'Z';
  iZ = (int) (Z);

  printf("Tell me something:\n\t");
  scanf("%s",&s);

  for(i = 0, sum = 0; i < N; i++)
  {
    is[i] = (int) (s[i]);
    if(is[i] >= ia && is[i] <= iz)
    {
      isa[i]= is[i] - ia + 1;
      sum += isa[i];
    }
    else if(is[i] >= iA && is[i] <= iZ)
    {
      isA[i]= is[i] - iA + 1;
      sum += isA[i];
    }
  }

  printf("The sum value of all the letters is %d.\n", sum);
}
