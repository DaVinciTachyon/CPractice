/*Find the smallest value of n such that 2^n has the digits 1 to 9 contained in it's last nine digits*/
#include <stdio.h>
#include <math.h>

#define BASE 2
#define SEARCHRANGE 9

int main()
{
  int findBool,
      power,
      digitsTally,
      searchPosCounter,
      finalDigits,
      powerTally,
      digitBool[SEARCHRANGE];

  power = 0;
  powerTally = 1;
  findBool = 1;

  while(findBool)
  {
    findBool = 0;

    for(digitsTally = 1; digitsTally <= SEARCHRANGE; digitsTally++)
    {
      digitBool[digitsTally - 1] = 0;
      for(searchPosCounter = 0; searchPosCounter < SEARCHRANGE; searchPosCounter++)
      {
        if(((int)(powerTally / pow(10, searchPosCounter))) % 10 == digitsTally)
          digitBool[digitsTally - 1] = 1;
      }
    }

    for(digitsTally = 0; digitsTally < SEARCHRANGE; digitsTally++)
    {
      if(!digitBool[digitsTally])
        findBool = 1;
    }

    finalDigits = powerTally;
    powerTally = (powerTally * BASE) % ((int)(pow(10, SEARCHRANGE)));
    power++;
    printf("n = %d\n", power - 1);
  }

  printf("The smallest value of n such that %d^n has the digits 1 to %d contained in it's last %d digits is %d\n", BASE, SEARCHRANGE, SEARCHRANGE, power - 1);
  printf("last %d digits of %d^%d = %d\n", SEARCHRANGE, BASE, power - 1, finalDigits);

  return 0;
}
