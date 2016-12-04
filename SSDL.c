#include <stdio.h>
#include <math.h>

#define cityList[3]
#define dayInfo[3][3]
#define DST 0 /*Daylight Savings Time available*/

float mean(float, float);
float amplitude(float, float);
float angularFrequency(float);
float phaseShift(float, float);
float sunriseCalculation();
float sunsetCalculation();
float sunlightHoursCalculation();

int main()
{
	//Assumption 1: The period of a year is 366 days, due to 2016 being a leap year
		//Consequence 1: Calculations will be wrong because the period is approximately 365 days, 5 hours, 48 minutes, 45 seconds
	//Assumption 2: Day 0 is the 1st of January 2016
	//Assumption 3: The functions below will be executed per city i.e. Dublin, Nuuk, Honolulu
	//Assumption 4: The user will give the time they see on their watch
		//Consequence 1: An hour must be subtracted between Sunday, March 27, 0:00 am and Sunday, October 30, 0:00 am for Dublin and Nuuk


	//USER
	//Ask for the earliest and the latest sunrise times over the year for those available and the day at which they occur
	//Ask for the earliest and the latest sunset times over the year for those available and the day at which they occur
	//Ask for the sunrise and sunset time for the longest day of the year and the day at which they occur
	//Ask for the sunrise and sunset time for the shortest day of the year and the day at which they occur
	//Ask for the day for which you want approximate sunrise, sunset and daylight hours
	

	//PROGRAM
	//Calculate the sunlight hours for the shortest day
	//Calculate the sunlight hours for the longest day

	//Create the function for Sunrise
	//Create the function for Sunset
	//Create the function for Sunlight Hours

	//Print Sunrise Time for the requested day
	//Print Sunset Time for the requested day
	//Print Sunlight Hours for the requested day
	
	return 0;
}
