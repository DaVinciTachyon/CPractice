#include <stdio.h>
#include <math.h>
int main(){
  float x;
  printf("Could you tell me a number? ");
  scanf("%f",&x);
  x = fabs(x) + fabs(x-3);
  printf("You result is %1.1f\n",x);
  return 0;
}
