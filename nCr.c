/*Choose Function*/
#include <stdio.h>

int main()
{
	int r,
		n,
		i,
		rfac,
		nrfac,
		nCr;
	n = 10;
	r = 3;
	
	for(i = n, nrfac = 1; i > n - r; i--) nrfac *= i;
	for(i = 1, rfac = 1; i <= r; i++) rfac *= i;
	
	nCr = nrfac/rfac;
	printf("nCr = %d",nCr);
	
	return 0;
}