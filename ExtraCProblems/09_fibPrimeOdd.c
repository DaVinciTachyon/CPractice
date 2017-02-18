#include <stdio.h>
#include <math.h>

int numFib(int);
int numPrime(int);
int checkPrime(int);
int numOdd(int);

int main()
{
  int n,
      sum;

  printf("Give me an n:\n\t");
  scanf("%d", &n);

  sum = numFib(n);
  sum += numPrime(n);
  sum += numOdd(n);

  printf("The sum of the %dth Fibonnacci number, prime number and odd number is %d.\n", n, sum);
  return 0;
}

int numFib(int n)
{
  int i,
      a,
      x[3];

  if(n == 1)
    return 0;
  else if(n == 2)
    return 1;
  else
    for(i = 2, x[0] = 0, x[1] = 1; i < n; i++)
    {
      x[2] = x[1] + x[0];
      x[0] = x[1];
      x[1] = x[2];
    }

  return x[2];
}

int numPrime(int n)
{
  int p, //Prime indicator
      m, //Counter for n
      i; //Counter

  m = 0;
  i = 0;

  if (n <= 0)
    return -1;
  else
  {
    while(m < n) //Repeats for requested amount of prime numbers
    {
      do
      {
        p = checkPrime(i);
        i++;
      } while(!p);
      m++;
    }
    return --i;
  }
}

int checkPrime(int N)
{
  int flag,
      i;

  flag = 0;

  if(N > 1 && N % N == 0 && N % 1 == 0)
  {
    for(i = 2, flag = 1; i <= sqrt(N) && flag == 1; i++)
    {
      if(N % i == 0)
      {
        flag = 0;
      }
    }
  }

  return flag;
}

int numOdd(int n)
{
  int i,
      odd;
  for (i = 1, odd = 1; i < n; i++)
    odd += 2;

  return odd;
}
