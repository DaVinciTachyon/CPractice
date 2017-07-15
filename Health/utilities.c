/*Utilities*/
#include <stdio.h>

float askPositiveReal(char input[])
{
  float value;

  printf("%s\n", input);
  do
  {
    printf("\t");
    scanf("%f", &value);
  } while(value <= 0.0);

  return value;
}

int askPositiveInteger(char input[])
{
  int value;

  printf("%s\n", input);
  do
  {
    printf("\t");
    scanf("%d", &value);
  } while(value <= 0);

  return value;
}
