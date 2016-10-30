#include <stdio.h>
int main()/*Main Function*/
{
  char  c1,c2,c3, /*Characters*/
        dumpC; /*For the enter key*/
  int   ic1,ic2,ic3; /*The integer value of the character*/

  /*Enter the coded letters*/
  printf("Enter the first 3 letters of your name coded: ");
  scanf("%c%c%c%c",&c1,&c2,&c3,&dumpC);
  /*Typecasting*/
  ic1 = (int) c1;
  ic2 = (int) c2;
  ic3 = (int) c3;
  /*Offset characters*/
  printf("The possible offset characters are:\n");
  for(int i = 0; i < 12; i++)
  {
    /*Offset*/
    ic1--;
    ic2--;
    ic3--;
    /*Typecasting*/
    c1 = (char) ic1;
    c2 = (char) ic2;
    c3 = (char) ic3;
    /*Formatting*/
    if(i == 11) printf("%c%c%c.\n",c1,c2,c3);
    else printf("%c%c%c, ",c1,c2,c3);
  }
  return 0;
}/*End of Main*/
