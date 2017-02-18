#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mathPractice.h"

void game(int num)
{
  int i,
      correct,
      timer;
  double t;
  char dumpC;

  printf("Press enter to start the timer and the game.\n");
  scanf("%c", &dumpC);

  for(i = 0, correct = 0, t = time(NULL), srand(time(NULL)); i < num; i++)
    correct += feedback(question(i + 1), response());

  t = time(NULL) - t;

  timer = (int)(t + 0.5);

  end(correct, num, timer);
}
