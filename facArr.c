#include <stdio.h>

int main()
{
	int fac[10],
		i;
	
	for(i = 1, fac[0] = 1; i < 10; i++)
		fac[i] = (i + 1) * fac[i - 1];
	
	for(i = 0; i < 10; i++)
		printf("%d\n", fac[i]);
	
	return 0;
}