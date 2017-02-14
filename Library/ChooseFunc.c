#include <stdio.h>
#include "fac.c"

int choose(int i, int j)
{
  return fac(i)/(fac(i-j)*fac(j));
}
