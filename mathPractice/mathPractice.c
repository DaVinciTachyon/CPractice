#include <stdio.h>
#include "mathPractice.h"

int main()
{
  int  num;

  num = intro();

  if(num > 0)
  {
    game(num);
  }

  return 0;
}
