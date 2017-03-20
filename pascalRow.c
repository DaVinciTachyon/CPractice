#include <stdio.h>

#define N 9

int main()
{
	int pascalsTriangle[N][N], i, j;
	
	for(j = 0; j < N; j++)
	{
		pascalsTriangle[0][j] = 0;
		pascalsTriangle[j][0] = 1;
	}
	
	for(i = 1; i < N; i++)
		for(j = 1; j < N; j++)
			pascalsTriangle[i][j] = pascalsTriangle[i-1][j-1] + pascalsTriangle[i-1][j];
	
	for(i = 0; i < N; i++)
	{
		for(j = N / 2 - i + 1; j >= 0; j--)
			printf("    ");
		
		for(j = 0; j < i + 1; j++)
			printf("%4d    ", pascalsTriangle[i][j]);
		printf("\n");
	}
	
	return 0;
}