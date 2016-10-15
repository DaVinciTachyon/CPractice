#include <stdio.h>
int main() {
  float F,
        C;
  printf("What is C? ");
  scanf("%f",&C);
  F = 9 * C / 5;
  F = F + 32;
  printf("F is %1.2f\n",F);
  return 0;
}
