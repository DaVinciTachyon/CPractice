#include<stdio.h>

int sum(int, int);
void printglobali(void);

int globali;

int main()
{
  extern int globali;
  int i,
      j;

  i = 6;
  j = 7;

  globali = sum(i, j);

  printglobali();

  return 0;
}

int sum(int i, int j)
{
  return i + j;
}

void printglobali(void)
{
  extern int globali;
  printf("globali is %d\n", globali);
}
