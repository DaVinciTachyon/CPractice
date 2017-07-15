#ifndef HEALTH
#define HEALTH

struct morsel
{
  float weight,
        protein,
        carbohydrate,
        fat,
        cals;
};
struct person
{
  float weight,
        height,
        cals;
  int   age;
  char  sex;
};

struct morsel getFood(void);
float askPositiveReal(char[]);
int askPositiveInteger(char input[]);
char askSex();
float getCalories(struct morsel);
float getPersonInfo();
float getCaloriesPerDay(struct person dude);

#endif
