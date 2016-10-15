#include<stdio.h>
int FAge(years){
  printf("You will be %d on your next birthday!\n",++years);
  return(0);
}
int main(){
  int age;
  printf("What is your age? ");
  scanf("%d",&age);
  FAge(age);
  return(0);
}
