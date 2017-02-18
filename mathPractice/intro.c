#include <stdio.h>

int intro()
{
  int  num;
  char dumpC;

  printf("Here is the math game.\n");
  do
  {
    printf("How many questions would you like to answer?\n\t");
    scanf("%d%c", &num, &dumpC);

    if(num > 1)
      printf("I will ask you %d questions to which to must give the correct answer.\n", num);
    else if(num == 1)
      printf("I will ask you a question to which to must give the correct answer.\n");
    else if(num == 0)
      printf("Up to you.\n\n");
    else
      printf("That won't work.\n\n");
  } while(num < 0);

  return num;
}
