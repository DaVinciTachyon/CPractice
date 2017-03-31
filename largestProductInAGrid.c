#include <stdio.h>

#define N 20

int main()
{
	FILE *file;
	int i, j, grid[N][N];
	
	for(i = 0, file = fopen("grid.txt", "r"); i < N; i++)
		for(j = 0; j < N; j++)
			fscanf(file, "%d", &grid[i][j]);
	
	
	
	return 0;
}