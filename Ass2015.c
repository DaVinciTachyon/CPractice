#include <stdio.h>
/*Code for Assessment 2015*/
int main()
{
  int i1, i2, i3, iav, j,
      isprime=1; /*Sentinel for Prime Tests, default is to Prime*/
  char  c1, c2, c3, cav,
        dumpc;/*Used for the return character*/
  /*Asking for 3 characters*/
  printf("Enter 3 characters without spaces\n");
  scanf("%c%c%c%c",&c1,&c2,&c3,&dumpc);
  printf("You entered: %c %c %c\n",c1,c2,c3);
  /*Typecasting the characters to integers*/
  i1 = (int)c1;
  i2 = (int)c2;
  i3 = (int)c3;
  printf("int values are %d %d %d\n",i1,i2,i3);
  /*Finding the average value*/
  iav = (i1+i2+i3)/3;
  printf("iav is %d\n",iav);
  /*Typecasting the average to an integer*/
  cav = (char)iav;
  printf("cav is %c\n",cav);
  /*Finding out if the average is prime*/
  for (int i = 2; i < iav; i++) /*All nums up to iav-1*/
  {
    if (iav%i==0)
    {
      isprime=0;
    }
  }
  if(isprime)
  {
    printf("%d is a prime\n",iav);
  }
  else printf("%d is not a prime\n",iav);
  
  return 0;
}/*end of main*/
