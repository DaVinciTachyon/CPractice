#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 200 //number of elements
#define M 100 //rand thingy

void bubbleSort(double RA[N]);
void insertionSort(double RA[N]);
void swap(double *, double *);

int main()
{
	double 	RA[3][N];
	int i;
	
	for(i = 0, srand(time(0)); i < N; i++)
		RA[0][i] = RA[1][i] = RA[2][i] = rand() % M;
	for(i = 0; i < N; i++)
		printf("%.0lf\t",RA[0][i]);
	printf("\n");
	
	bubbleSort(RA[1]);
	for(i = 0; i < N; i++)
		printf("%.0lf\t",RA[1][i]);
	printf("\n");
	
	insertionSort(RA[2]);
	for(i = 0; i < N; i++)
		printf("%.0lf\t",RA[2][i]);
	printf("\n");
	
	return 0;
}

void bubbleSort(double RA[N])
{
	int i, j;
	for(i = 0; i < N; i++)
		for(j = 0; j < N - i - 1; j++)
			if(RA[j] > RA[j+1])
				swap(&RA[j], &RA[j+1]);
}

void swap(double *a, double *b)
{
	double t;
	t = *a;
	*a = *b;
	*b = t;
}

void insertionSort(double RA[N])
{
	int i, j, k, temp;
	
	for(i = 0; i < N; i++)
		for(j = 0; j <= i; j++)
			if(RA[i] < RA[j] || j == i)
			{
				for(k = i, temp = RA[i]; k > j; k--)
					RA[k] = RA[k - 1];
				RA[j] = temp;
				break;
			}
}