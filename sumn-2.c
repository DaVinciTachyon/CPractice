#include<stdio.h>
#include<math.h>
//The purpose of this program is practice functions, and summation
//In the program below you will find the main function and three supporting functions
//f1:
//f2:
//f3:
double f(int);

int main()
{
  double  sum,
          tol;
  char    c;

  printf("Would you like to sum for a number of terms [s] or give a tolerance to approach pi^2/6 [t]: ");
  scanf("%c",&c);

  if(c == 's')
  {
    sum = s();
  }
  if(c == 't')
  {
    sum = t();
  }

  printf("The answer to the sum is %lf", sum);

  return 0;
}

double s()
{
  double sum = 0;
  int n,
      N;
  printf("Give me a natural number: ");
  scanf("%d",&N);

  for(n = 1; n <= N; n++)
  {
    sum += n(n);
  }

  return sum;
}

double t()
{
  double sum = 0,
          tol;
  int n;

  printf("Give me a tolerance: ");
  scanf("%lf",&tol);

  n = 1;
  while(sum < pow(M_PI, 2)/6 - tol)
  {
    sum += n(n);
    n++;
  }

  return sum;
}

double n(int n)
{
  return 1/pow(n,2);
}

double f(int n)
{
  int i,
      f;

  printf("Give me a natural number: ");
  scanf("%d",&n);

  for(i = 0; i < n; n++)
    f *= i;

  return f;
}
