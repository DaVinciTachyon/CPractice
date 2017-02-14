#include <stdio.h>

int askNat(char input[100])
{
  int N;
  char  dumpC;

  do
  {
    printf("%s: \n\t", input);
    scanf("%d%c", &N, &dumpC);
  } while(N < 1);

  return N;
}
