#include <stdio.h>
int main(){
  float x;
  printf("Could you tell me a number? ");
  scanf("%f",&x);
  if(x>=0){
    if(x>=3){
      x = 2 * x - 3;
    }
    else{
      x = x + -1 * (x - 3);
    }
  }
  else{
    x = -x + -1 * (x - 3);
  }
  printf("You result is %1.1f\n",x);
  return 0;
}
