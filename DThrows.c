#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000 /*Do it N times*/

int main()
{
	int i,
		j,
		n;
	float a;
	
	srand((unsigned)time(NULL));
	for(i = 0; i < N; i++)
	{
		n = 0;
		do
		{
			j = rand()%6+1;
			n++;
		} while(j != 6);
		a += (float)n;
	}
	a /= N;
	printf("Test Mean = %f", a);
	
	return 0;
}