#include<stdio.h>
int main() {
  char  myChar,
        myChar2,
        dumpChar;
  printf("Enter a letter: ");
  scanf("%c%c",&myChar,&dumpChar);
  printf("You entered %c.\n",myChar);
  printf("Enter another letter: ");
  scanf("%c%c",&myChar2,&dumpChar);
  printf("You entered %c.\n",myChar2);
  return 0;
}
