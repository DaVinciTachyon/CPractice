#include <stdio.h>
#include <math.h>

double nFac(double);
double nCr(double, double);
double nPr(double, double);

int main()
{
	double x, y, r, sum;
	int n;
	
	printf("x: ");
	scanf("%lf",&x);
	printf("y: ");
	scanf("%lf",&y);
	printf("n: ");
	scanf("%lf",&n);
	
	for(r = 0, sum = 0; r <= n; r++)
		sum += nCr(n, r) * pow(x, r) * pow(y, n - r);
	
	printf("%lf\t%lf", sum, pow(x + y, n));
	
	return 0;
}

double nFac(double n)
{
	double fac;
	int	i;
	
	for(i = 1, fac = 1; i <= n; i++)
		fac *= i;

	return fac;
}

double nCr(double n, double r)
{
	return nFac(n) / (nFac(n - r) * nFac(r));
}

double nPr(double n, double r)
{
	return nFac(n) / nFac(n - r);
}