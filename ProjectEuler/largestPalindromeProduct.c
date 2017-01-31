/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <stdio.h>
#include <math.h>

int checkPalindrome(int);
int findLength(int, int);

int main()
{
  int i,
      j,
      temp,
      palindrome,
      test;

  for (i = 100, palindrome = 0; i < 1000; i++)
  {
    for (j = 100; j < 1000; j++)
    {
      printf("i = %d\t j = %d\n", i, j);
      temp = i * j;
      test = checkPalindrome(temp);
      if(test && temp > palindrome)
      {
        palindrome = temp;
      }
    }
  }

  printf("The largest palindrome made from the product of two 3-digit numbers is %d\n", palindrome);

  return 0;
}

int checkPalindrome(int n)
{
  int flag,
      length,
      i;

  flag = 1;
  length = findLength(6, n) - 1;

  for(i = 0; i <= (length + 2) / 2; i++, length--)
  {
    if((((int)(n / pow(10, length))) % 10) != (((int)(n / pow(10, i))) % 10))
    {
      flag = 0;
      break;
    }
  }

  if(flag)
    return 1;
  else
    return 0;
}

int findLength(int l, int n)
{
  int flag;

  flag = 1;

  while(flag)
  {
    l--;
    if((int)(n / pow(10, l)) != 0)
      flag = 0;
  }
  return l + 1;
}
