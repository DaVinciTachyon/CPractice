#include<stdio.h>
#include<math.h>
int main() {
  //Initialisations
  float num1,
        num2,
        num3,
        num4,
        sum,
        average,
        cosnum1,
        cosnum2,
        cosnum3,
        cosnum4,
        sinnum1,
        sinnum2,
        sinnum3,
        sinnum4;

  //Finding Numbers
  printf("Number 1: ");
  scanf("%f",&num1);
  printf("Number 2: ");
  scanf("%f",&num2);
  printf("Number 3: ");
  scanf("%f",&num3);
  printf("Number 4: ");
  scanf("%f",&num4);

  //Calcultions
  sum = num1 + num2 + num3 + num4;
  average = sum / 4;
  cosnum1 = cos(num1);
  cosnum2 = cos(num2);
  cosnum3 = cos(num3);
  cosnum4 = cos(num4);
  sinnum1 = sin(num1);
  sinnum2 = sin(num2);
  sinnum3 = sin(num3);
  sinnum4 = sin(num4);

  //Results
  printf("The sum is %f\n",sum);
  printf("The average is %f\n",average);
  printf("The cosine of number %f is %f,\nthe cosine of number %f is %f,\nthe cosine of number %f is %f, and\nthe cosine of number %f is %f.\n",num1,cosnum1,num2,cosnum2,num3,cosnum3,num4,cosnum4);
  printf("The sine of number %f is %f,\nthe sine of number %f is %f,\nthe sine of number %f is %f, and\nthe sine of number %f is %f.\n",num1,sinnum1,num2,sinnum2,num3,sinnum3,num4,sinnum4);
  return 0;
}
