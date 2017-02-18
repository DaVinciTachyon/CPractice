#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main()
{
  int n,
      i,
      j,
      d[N],
      doubles,
      triples;

  do
  {
    printf("How many times would you like to throw %d dice?\n\t", N);
    scanf("%d", &n);
  } while(n < 0);

  for(i = 0, doubles = 0, triples = 0, srand(time(NULL)); i < n; i++)
  {
    for(j = 0; j < N; j++)
      d[j] = (int)rand() % 6 + 1;

    if(d[0] == d[1] && d[0] == d[2])
      triples++;
    else if(d[0] == d[1] || d[0] == d[2] || d[1] == d[2])
      doubles++;
  }

  printf("There have been %d triples and %d doubles in the %d trials.\n", triples, doubles, n);
  return 0;
}
