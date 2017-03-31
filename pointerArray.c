#include <stdio.h>
#include <math.h>

#define N 16

void setA(int *);
void setB(int *);

int main()
{
	int a[4][4],
		b[8][2];
		
	setA(a);
	setB(b);
	
	int i, j;
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
			if(j==3)
				printf("\n");
		}
	printf("\n");
	for(i = 0; i < 8; i++)
		for(j = 0; j < 2; j++)
		{
			printf("%2d ", b[i][j]);
			if(j==1)
				printf("\n");
		}
}

void setA(int *a)
{
	int i;
	
	for(i = 0; i < N; i++)
		if(i%4==(int)(i/4))
			*(a + i) = 1;
		else
			*(a + i) = 0;
}

void setB(int *a)
{
	int i;
	
	for(i = 0; i < N; i++)
		*(a + i) = i + 1;
}