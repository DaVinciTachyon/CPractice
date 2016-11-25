#include <stdio.h>

int dice()
{
	int t;
	
	srand((unsigned)time(NULL);
	t = rand()%6+1;
	
	return t;
}