/*Finding the Highest Common Factor using Euclid's Algorithm*/

#include<stdio.h>

int HCF(int num1, int num2)
{
	int	rem;

	if(num1 < 0 || num2 < 0)
		printf("You numbers must be positive.\n");

	if(num1 >= 0 && num2 >= 0)
	{
		if(num2 > num1)
		{
			int temp;

			temp = num2;
			num2 = num1;
			num1 = temp;
		}

		do
		{
			rem = num1 % num2;
			num1 = num2;
			num2 = rem;
		} while(rem != 0);
	}

	return num1;
}
