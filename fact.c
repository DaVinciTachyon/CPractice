/*n! = n*(n-1)!
(n-1)! = (n-1)*(n-2)!
...
3! = 3*2!
2! = 2*1!
1! = 1*0!
0! = 1

m! = m*(m-1)!
0! = 1*/
/*
Recursion
1- Function which depends on "simpler" call to the same function
2 - Has well defined end point
Recurrence Relations
Orthogonal Polynomials
Chevychev Polynomials
T0 = 1
T1 = x
*Tn = 2xT(n-1)-T(n-2)*
*/
#include <stdio.h>

int fac(int);

int main()
{
  int n;
  printf("What factorial would you like to see? ");
  scanf("%d", &n);
  printf("%d! = %d", n, fac(n));
  return 0;
}

int fac(int n)
{
  if(n == 0)
    return 1;
  n *= ((n > 1) ? fac(n - 1) : 1);
}
