#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 49

int main()
{
	int num[N],
		i,
		j,
		flag;
	srand((unsigned int)time(NULL));
	
	for(i = 0; i < N; i++)
		do{
			num[i] = rand() % M + 1;
			for(j = 0, flag = 0; j < i; j++)
				if(num[i] == num[j]) flag = 1;
		}while(flag);
		
	for(i = 0; i < N; i++)
		printf("Number %d: %d\n", i, num[i]);
	
	return 0;
}