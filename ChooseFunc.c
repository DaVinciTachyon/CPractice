#include <stdio.h>
#include "factorial.o"
int choose(int i, int j) {
  unsigned int c;
  c = fact(i)/(fact(i-j)*fact(j));
  return c;
}
