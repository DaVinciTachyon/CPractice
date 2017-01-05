#include <stdio.h>
#define N 1

int main()
{

  int   ia,
        iA,
        i,
        is[N],
        sum,
        isa[N],
        isA[N];
  char  a,
        A,
        s[N];

  a = 'a';
  ia = (int) (a);
  A = 'A';
  iA = (int) (A);

  printf("Tell me something:\n\t");
  scanf("%s",&s);

  for(i = 0, sum = 0; i < N; i++)
  {
    is[i] = (int) (s[i]);
    isa[i]= is[i] - ia + 1;
    isA[i]= is[i] - iA + 1;
    if(isa[i] >= 1 && isa[i] <= 26)
      sum += isa[i];
    if(isA[i] >= 1 && isA[i] <= 26)
      sum += isA[i];
  }

  printf("The sum value of all the letters is %d.\n", sum);
}
