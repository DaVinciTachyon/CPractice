/*Find the smallest value of n such that 2^n has the digits 1 to 9 contained in it's last nine digits*/
#include <stdio.h>
#include <math.h>

#define BASE 2          //Powers of this base are searched for a solution
#define SEARCHRANGE 9   //The number and range of numbers to be searched

int main()
{
  //Declarations
  int findBool,                 //Boolean which determines whether a final solution has been found
      finalDigits,              //Stores the last SEARCHRANGE digits of the final solution
      power,                    //The power of BASE that is being checked
      powerTally,               //Creates the number to check
      digitsTally,              //Determines the digit being checked
      digitBool[SEARCHRANGE],   //Boolean which determines whether the digit being checked is in the number being checked
      searchPosCounter;         //Determines the position to check within the number

  //Initialisations
  findBool = 1;   //In order to access the while loop there must be no solution
  power = 0;      //Lowest power that is an integer, if 1 is excluded
  powerTally = 1; //Lowest integer value of each power

  while(findBool)                                                                   //Continues as long as a solution has not been found
  {
    findBool = 0;                                                                   //Assumes the soltuion has been found, and may be changed if it is not the solution

    for(digitsTally = 1; digitsTally <= SEARCHRANGE; digitsTally++)                 //Seaches all of the digits in the search range
    {
      digitBool[digitsTally - 1] = 1;                                               //Assumes there is no value there
      for(searchPosCounter = 0; searchPosCounter < SEARCHRANGE; searchPosCounter++) //Searches all of the positions available
      {
        if(((int)(powerTally / pow(10, searchPosCounter))) % 10 == digitsTally)     //If there is the digit being checked in the position being checked
        {
          digitBool[digitsTally - 1] = 0;                                           //Confirms the existence of the digit in the postion
          break;                                                                    //Breaks the search for this digit if one has been found
        }
      }
    }

    for(digitsTally = 0; digitsTally < SEARCHRANGE; digitsTally++)                  //Check all of the numbers in the search range
    {
      if(digitBool[digitsTally])                                                    //If one of the numbers has not been found
        findBool = 1;                                                               //It is the not the solution
    }

    finalDigits = powerTally;                                                       //Saves the solution temporarily
    powerTally = (powerTally * BASE) % ((int)(pow(10, SEARCHRANGE)));               //Creates the next number to check
    power++;                                                                        //Updates the power of the number being checked
    printf("n = %d\n", power - 1);                                                  //Prints the power to check, in order to update the user
  }

  printf("The smallest value of n such that %d^n has the digits 1 to %d contained in it's last %d digits is %d\n", BASE, SEARCHRANGE, SEARCHRANGE, power - 1); //Prints the solution
  printf("last %d digits of %d^%d = %d\n", SEARCHRANGE, BASE, power - 1, finalDigits);                                                                         //Confirms the fact that it is a solution

  return 0;
}
