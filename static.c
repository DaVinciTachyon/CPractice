#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void printRunningTotal(int);

int main()
{
  int i;

  srand(time(NULL));

  for(i = 0; i < N; i++)
    printRunningTotal(rand() % 10);

  return 0;
}

void printRunningTotal(int input)
{
  static int total = 0;

  total += input;

  printf("total = %d\tinput = %d\n", total, input);
}
