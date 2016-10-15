#include <stdio.h>
int main(){
  char yourName[50], myName[50] = "Michael";
  printf("Tell me your name: ");
  scanf("%s",yourName);
  printf("Your name is %s, and mine is %s\n",yourName,myName);
  return 0;
}
