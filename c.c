#include <stdio.h>
int main() {
  int num1,
      num2,
      num3,
      num4;
  num1 = random() % 1000;
  num2 = random() % 1000;
  num3 = num1 + num2;
  printf("%d thousand +\n%d thousand\n= ",num1,num2);
  scanf("%d",&num4);
  printf("thousand\n");
  if(num3 == num4){
    printf("Correct\n");
  }
  else if(num3 != num4){
    printf("WRONG\nStart again...\n");
  }
  return 0;
}
