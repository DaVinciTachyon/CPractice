#include <stdio.h>
int main() {
  int   usrMonth,
        daysMonth[12],
        year;
  char  dumpChar;
  daysMonth[0] = daysMonth[2] = daysMonth[4] = daysMonth[6] = daysMonth[7] = daysMonth[9] = daysMonth[11] = 31;
  daysMonth[3] = daysMonth[5] = daysMonth[8] = daysMonth[10] = 30;
  printf("What year is it? ");
  scanf("%d",&year);
  if(year%400==0){
    daysMonth[1] = 29;
  }
  else if(year%100==0){
    daysMonth[1] = 28;
  }
  else if(year%4==0){
    daysMonth[1] = 29;
  }
  else {
    daysMonth[1] = 28;
  }
  do {
    printf("Tell me the month you want. Please use a number.\nMonth Number: ");
    scanf("%d%c",&usrMonth,&dumpChar);
  } while (usrMonth<0|usrMonth>13);
  printf("There are %d days in the month.\n",daysMonth[usrMonth-1]);
  return 0;
}
