/*Calorie Calculator*/
#include <stdio.h>
#include <string.h>

struct morsel
{
  float weight,
        protein,
        carbohydrate,
        fat;
};

struct morsel getFood();
float askPositiveReal(char input[]);
float getCalories(struct morsel food);

int main()
{
  struct morsel food;
  float cals;

  food = getFood();

  cals = getCalories(food);

  printf("%.0f\n", cals);

  return 0;
}

struct morsel getFood()
{
  struct morsel food;

  food.weight = askPositiveReal("How many grams does the food weigh?");
  food.protein = askPositiveReal("How many grams of protein per 100 grams are there?");
  food.carbohydrate = askPositiveReal("How many grams of carbohydrates per 100 grams are there?");
  food.fat = askPositiveReal("How many grams of fat per 100 grams are there?");

  return food;
}

float askPositiveReal(char input[])
{
  float value;

  printf("%s\n\t", input);
  do
  {
    scanf("%f", &value);
  } while(value < 0.0);

  return value;
}

float getCalories(struct morsel food)
{
  float cals;

  cals = 0;

  cals += food.protein * 4 * food.weight / 100;
  cals += food.carbohydrate * 4 * food.weight / 100;
  cals += food.fat * 9 * food.weight / 100;

  return cals;
}
