#include <stdio.h>
int main() {
  char  a,
        dumpChar;
  int ia;
  printf("Enter a character: ");
  scanf("%c%c",&a,&dumpChar);
  printf("Your input was %c\n",a);
  printf("Your input was %d\n",a);
  ia = (int) a;
  printf("The ASCII code for %c id %d\n",a,ia);
  return 0;
}
