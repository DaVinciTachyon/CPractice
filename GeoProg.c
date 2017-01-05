#include <stdio.h>
#include <math.h>
int main()
{
  int a,r,n,o,S,i=0;
  printf("What is your initial value?\n\t");
  scanf("%d",&a);
  printf("What is your ratio?\n\t");
  scanf("%d",&r);
  do
  {
    printf("What is the number of terms you want to add?\n\t");
    scanf("%d",&n);
  } while (n<0);

  do {
    printf("Do you want to:\n1. Find the sum of the terms.\n2. Find how many terms it takes for the sum to exceed or equal the number of terms.\n");
    scanf("%d",&o);
    switch (o) {
      case 1:
        S = a*(1-pow(r,n))/(1-r);
        printf("The sum is %d.\n",S);
        break;
      case 2:
        do {
          S += a * pow(r, i);
          i++;
        } while (i<n);
        printf("It takes %d times.\n",i-1);
        break;
      default:
        printf("I don't know what you want me to do.\nTry Again.\n");
        break;
    }
  } while (o!=1&&o!=2);

  return 0;
}
