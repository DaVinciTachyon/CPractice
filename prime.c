#include <stdio.h>
#include <math.h>
#include "Library\askNat.c"
#include "Library\checkPrime.c"
#include "Library\displayIfPrime.c"

int main()
{
  //The number to be checked
  int N,
  //Shows whether it is prime or not
      flag;

  //Ask for an input number to be checked
  N = askNat();

  //Check if the number is a prime
  flag = checkPrime(N);

  //Diplay whether it is prime or not
  displayIfPrime(N, flag);

  return 0;
}
