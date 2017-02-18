#include <stdio.h>

void end(int correct, int num, int timer)
{
  if(timer == 1)
  {
    if(num > 1)
      printf("You answered %d out of %d questions correctly in 1 second.\n\n", correct, num);
    else
      printf("You answered %d out of 1 question correctly in 1 second.\n\n", correct);
  }
  else
  {
    if(num > 1)
      printf("You answered %d out of %d questions correctly in %d seconds.\n\n", correct, num, timer);
    else
      printf("You answered %d out of 1 question correctly in %d seconds.\n\n", correct, timer);
  }
}
