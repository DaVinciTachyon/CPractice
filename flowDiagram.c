#include<stdio.h>
int main(){
  float F,
        C;
  printf("What is F? ");
  scanf("%f",&F);
  F = F - 32;
  C = 5 * F / 9;
  printf("C is %1.2f\n",C);
  return 0;
}
