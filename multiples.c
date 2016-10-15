#include<stdio.h>
int main() {
  int num1,
      i;
  printf("Write a number for which you want to know the multiples up to 12.\nMake it an integer, please. ");
  scanf("%d",&num1);
  for (i = 0; i <= 12; i++) {
    printf("%d x %d\t= %d\n",i,num1,i*num1);
  }
  return(0);
}
