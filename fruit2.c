#include<stdio.h>
int main() {

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
  printf("How many oranges did you buy?\t\t");
  scanf("%d",&oranges);
	printf("How much did you spend on oranges?\t");
  scanf("%f",&orangesCost);
  printf("How many apples did you buy?\t\t");
  scanf("%d",&apples);
  printf("How much did you spend on apples?\t");
  scanf("%f",&applesCost);
  printf("How many pears did you buy?\t\t");
  scanf("%d",&pears);
  printf("How much did you spend on pears?\t");
  scanf("%f",&pearsCost);

  totalCost		= applesCost + pearsCost + orangesCost;
  averageCost	= totalCost / (apples + pears + oranges);
  printf("Cost of %d apples:\t€%.2f,\nCost of %d pears:\t€%.2f\nand Cost of %d oranges:\t€%.2f,\nThe total cost is\t€%.2f;\nWith an average of\t€%.2f per fruit.\n",apples,applesCost,pears,pearsCost,oranges,orangesCost,totalCost,averageCost);
  return 0;
}
