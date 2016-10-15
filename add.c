#include<stdio.h>
int main(){
  int num1,
      num2;
  printf("I wish to receive one number from you. Please make it and integer.\nWrite it now. ");
  scanf("%d",&num1);
  printf("I wish to receive another number from you. Please make it and integer.\nWrite it now. ");
  scanf("%d",&num2);
  printf("Here are the two numbers added together: %d.\n",num1+num2);
  return(0);
}
