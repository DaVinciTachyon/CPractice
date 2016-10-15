#include <stdio.h>
#define lastChar '#'
int main() {
  char  myChar,
        dumpChar;
  int myInt,
      offset;

  //Offset
  printf("What is the offset? ");
  scanf("%d%c",&offset,&dumpChar);

  printf("\nInput new characters one at a time,\nthe last one must be %c in order to terminate the program.\nThank You.\n\n",lastChar);
  //Code-breaking
  do {
    printf("Enter the coded character: ");
    scanf("%c%c",&myChar,&dumpChar);
    myInt = (int)myChar;
    myInt += offset;
    myChar = (char)myInt;
    printf("The new character is %c\n",myChar);
  } while (myChar != lastChar);
  printf("The program has been terminated.\n");
}
