#include <stdio.h>
int main()
{
	char i,dC;
	do{
		printf("Input 'y' or 'n': ");
		scanf("%c%c",&i,&dC);
	}while((i!='y')&&(i!='n'));
	return 0;
}