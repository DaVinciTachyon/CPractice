#include<stdio.h>
int main(){

	//Declarations
	float	orangesCost,
				applesCost,
				pearsCost,
				totalCost,
				averageCost;
	int	oranges,
			apples,
			pears;

	//Initialisations
	orangesCost	= 1.21f;
	applesCost 	= 0.67f;
	pearsCost 	= 1.02f;
	
	//Shows the Costs
	printf("Cost of an Orange\t€%3.2f\nCost of an Apple\t€%3.2f\nCost of a Pear\t\t€%3.2f\n\n",orangesCost,applesCost,pearsCost);
	//First Iteration
	oranges	= 14;
	pears		= 2;
	apples	= 6;
	totalCost		= (apples * applesCost ) + (pears * pearsCost) + (oranges * orangesCost);
	averageCost	= totalCost / (apples + pears + oranges);
	printf("Cost of\t%d Apples,\t %d Pears\tand %d Oranges\tis €%4.2f;\tWith an average of\t€%4.2f per fruit.\n",apples,pears,oranges,totalCost,averageCost);
	//Second Iteration
	oranges	= 6;
	pears		= 15;
	apples	= 12;
	totalCost 	= (apples * applesCost ) + (pears * pearsCost) + (oranges * orangesCost);
	averageCost	= totalCost / (apples + pears + oranges);
	printf("Cost of\t%d Apples,\t %d Pears\tand %d Oranges\tis €%4.2f;\tWith an average of\t€%4.2f per fruit.\n",apples,pears,oranges,totalCost,averageCost);
	return(0);
}
