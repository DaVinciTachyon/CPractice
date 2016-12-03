#include<stdio.h>
#define N 10000000.0
int main()
{
	int i,j,m,sum=0;
	float av;
	srand((unsigned int)time(NULL));
	for(m=0;m<N;m++)
	{
		j=0;
		do{
			i = (int) (rand()%6+1);
			//printf("%d\n",i);
			j++;
		}while(i!=6);
		sum+=j;
	}
	av=sum/N;
	printf("The expected number of throws is %f.\n",av);
	return 0;
}