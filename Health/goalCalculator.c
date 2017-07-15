/*Goal Calculator*/
#include <stdio.h>
#include <string.h>
#include "health.h"

float getPersonInfo()
{
  struct person dude;

  dude.age = askPositiveInteger("How old are you (in years)?");
  dude.sex = askSex();
  dude.weight = askPositiveReal("How much do you weigh (in kg)?");
  dude.height = askPositiveReal("How tall are you (in cm)?");

  return getCaloriesPerDay(dude);
}

float getCaloriesPerDay(struct person dude) //do it
{
  dude.cals = 1800;

  return dude.cals;
}

char askSex() //incomplete
{
  char sex[7];

  printf("Are you male or female?\n");
  do
  {
    printf("\t");
    scanf("%s", &sex);
  } while(strcmp(sex, "male") && strcmp(sex, "female"));

  return sex[0];
}
