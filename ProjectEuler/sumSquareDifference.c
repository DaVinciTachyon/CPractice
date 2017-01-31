/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
#include <stdio.h>
#include <math.h>

int main()
{
  int sumS,
      sqSum,
      diff,
      i;

  sumS = 0;
  sqSum = 0;

  for (i = 1; i <= 100; i++)
  {
    sumS += i;
  }
  sumS = pow(sumS, 2);

  for (i = 1; i <= 100; i++)
  {
    sqSum += pow(i, 2);
  }

  diff = sqSum - sumS;

  printf("%d\n", diff);

  return 0;
}
