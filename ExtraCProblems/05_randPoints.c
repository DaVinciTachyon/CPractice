#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n,
      i,
      inRange;
  double  x,
          y,
          xRange;

  printf("How many points shall I generate?\n\t");
  scanf("%d", &n);
  printf("What is your point x?\n\t");
  scanf("%lf", &xRange);

  for (i = 0, inRange = 0, srand(time(NULL)); i < n; i++)
  {
    if ((int)rand() % 2 == 0)
      x = rand();
    else
      x = -1 * rand();
    if ((int)rand() % 2 == 0)
      y = rand();
    else
      y = -1 * rand();
    //printf("(%lf, %lf)\n", x, y);
    if(x <= xRange + 4 && x >= xRange - 4)
      inRange++;
  }

  printf("There are %d points in the range [%lf, %lf].\n", inRange, xRange - 4, xRange + 4);

  return 0;
}
