#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  srand(time(0));
  printf("%d\n",RAND_MAX);
  return 0;
}
