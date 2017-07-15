/*Calorie Calculator*/
#include <stdio.h>
#include <string.h>
#include "health.h"

struct morsel getFood()
{
  struct morsel food;

  food.weight = askPositiveReal("How many grams does the food weigh?");
  food.protein = askPositiveReal("How many grams of protein per 100 grams are there?");
  food.carbohydrate = askPositiveReal("How many grams of carbohydrates per 100 grams are there?");
  food.fat = askPositiveReal("How many grams of fat per 100 grams are there?");

  return food;
}

float getCalories(struct morsel food)
{
  food.cals = 0;

  food.cals += food.protein * 4;
  food.cals += food.carbohydrate * 4;
  food.cals += food.fat * 9;
  food.cals *= food.weight / 100;

  return food.cals;
}
