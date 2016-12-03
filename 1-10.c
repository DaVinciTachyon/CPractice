#include <stdio.h>
int main()
{
	float i;
	do{
		printf("Input a number between 1 and 10: ");
		scanf("%f",&i);
	}while(i>10||i<1);
	return 0;
}