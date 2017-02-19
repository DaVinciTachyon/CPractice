#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, j,
      oNum, num,
      os[10] = {1, 0, 0, 0, 1, 0, 0, 0, 0, 1};

  printf("Give me an n:\n\t");
  scanf("%d", &n);



  for (i = 1, oNum = 0; i <= n; i++)
  {
    j = 0;
    do
    {
      num = (int)(i / pow(10, j)) % 10;
      oNum += os[num];
      j++;
    } while(i > pow(10, j));
  }

  printf("The number of times \"o\" appears in the numbers 1 to %d in Lojban is %d.\n", n, oNum);
  return 0;
}
