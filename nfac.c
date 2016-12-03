#include<stdio.h>
#define N 5
int fac(int x)
{
	int i;
	if(x==0) return 1;
	else
	{
		int adder=1;
		for(i=1;i<=x;i++) adder*=i;
		return adder;
	}
}
int main()
{
	int i;
	int sum=0;
	for(i=0;i<=N;i++) sum+=fac(i);
	printf("%d",sum);
	return 0;
}