#include <stdio.h>

double askReal(char input[100])
{
  double  N;
  char    dumpC;

  printf("%s: \n\t", input);
  scanf("%lf%c", &N, &dumpC);

  return N;
}
