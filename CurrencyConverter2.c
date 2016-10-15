#include<stdio.h>
int main(){
	char 	x;
	float Dollar,
				Euro,
				Eurorate,
				Dollarrate,
				y,
				a;
	Eurorate 	= 1.12f;
	Dollarrate = 0.89f;

	printf("Would you like to convert from Euro or Dollar? ");
	scanf("%c",&x);
		if(x == 'e'){
			printf("How much would you like to convert? €");
			scanf("%f",&y);
			Euro = y * Eurorate;
			printf("The value in Dollar is $%.2f.\n",Euro);
		}
		else if(x == 'd'){
			printf("How much would you like to convert? $");
			scanf("%f",&a);
			Dollar = a * Dollarrate;
			printf("The value in Euro is €%.2f\n",Dollar);
		}
	return (0);
}
