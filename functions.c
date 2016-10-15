#include <stdio.h>
int main(){
  float x;
  printf("Could you tell me a number? ");
  scanf("%f",&x);
  if(x < 0) x=x;
  else if(x > 1) x *= 4;
  else x = x*x + 3*x;
  printf("You result is %1.1f\n",x);
  return 0;
}
