#include <stdio.h>
#include "Library\askNat.c"

char askChar(void);
void nLineInt(int, char);

int main()
{
  int n;
  char c;

  n = askNat();
  c = askChar();

  nLineInt(n, c);

  return 0;
}

char askChar(void)
{
  char  c,
        dumpC;

  printf("Give me a character: \n\t");
  scanf("%c%c", &c, &dumpC);

  return c;
}

void nLineInt(int n, char c)
{
  for(int i = 1; i < n; i++)
    printf("\n");

  printf("%c", c);
}
