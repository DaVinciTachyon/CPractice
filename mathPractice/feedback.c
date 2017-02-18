#include <stdio.h>

int feedback(double sum, double ans)
{
  if(sum == ans)
  {
    printf("\tCorrect.\n\n");
    return 1;
  }
  else
  {
    printf("\tWrong, the answer is %.0lf.\n\n", sum);
    return 0;
  }
}
