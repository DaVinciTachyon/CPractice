#include<stdio.h>
#include "fac.c"

int facAdd(int n)
{
	int i,
			sum;

	for(i = 0, sum = 0; i <= n; i++)
		sum += fac(i);

	return sum;
}
