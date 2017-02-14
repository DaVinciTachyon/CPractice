#include <stdio.h>

#define N 3
#define M 12

int main()/*Main Function*/
{
  char  c[N], /*Characters*/
        dumpC; /*For the enter key*/
  int   ic[N], /*The integer value of the character*/
        i,
        j;

  /*Enter the coded letters*/
  printf("Enter the first 3 letters of your name coded: ");
  scanf("%s%c",&c,&dumpC);
  /*Typecasting*/
  for(i = 0; i < N; i++)
    ic[i] = (int) c[i];
  /*Offset characters*/
  printf("The possible offset characters are:\n");
  for(i = 0; i < M; i++)
  {
    /*Offset*/
    for(j = 0; j < N; j++)
      ic[j]--;
    /*Typecasting*/
    for(j = 0; j < N; j++)
      c[j] = (char) ic[j];
    /*Formatting*/
    if(i == M - 1) printf("%s.\n",c);
    else printf("%s, ",c);
  }
  return 0;
}/*End of Main*/
