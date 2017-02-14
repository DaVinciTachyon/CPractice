#include <stdio.h>
#include <math.h>

int main()
{
  int i,
      k,
      j;
  double  N,
          x,
          t,
          xnew,
          sqrtN;

  printf("Give me a positive number for N: \n");
  scanf("%lf", &N);
  printf("Give me a positive number for x: \n");
  scanf("%lf", &x);
  printf("Give me a positive integer for k: \n");
  scanf("%d", &k);
  printf("Give me a positive number for t: \n");
  scanf("%lf", &t);

  sqrtN = sqrt(N);

  for(i = 0, j = 0; i < k && (x > sqrtN + t || x < sqrtN - t); i++, j++)
  {
    xnew = (x + N / x) / 2;
    x = xnew;
  }

  printf("The approximate square root of %lf is %lf\n", N, x);
  printf("The square root of %lf is %lf\n", N, sqrtN);
  printf("It took %d iterations\n", j);

  return 0;
}
