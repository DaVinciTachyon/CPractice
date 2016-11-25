#include <stdio.h>

int main()
{
	int m,
		i;

	do {
		printf("Input a month (1 - 12): ");
		scanf("%d",&m);
		i=0;
		switch (m)
		{
			case 11: case 12: case 1:
				printf("You are in winter\n");
				break;
			case 2: case 3: case 4:
				printf("You are in spring\n");
				break;
			case 5: case 6: case 7:
				printf("You are in summer\n");
				break;
			case 8: case 9: case 10:
				printf("You are in autumn\n");
				break;
			default:
			{
				printf("You are wrong.\n");
				i = 1;
				break;
			}
		}
	} while(i==1);
}