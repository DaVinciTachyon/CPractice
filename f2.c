#include <stdio.h>
#include <math.h>

#define PI 3.14159

float f(float x)
{
	float	f;
	
	if ( x <= 0) f = x * x;
	else if (x >= PI) f = pow(x - PI, 3);
	else if (x >= PI / 2) f = sin(x);
	else f = 2 * x / PI;
	
	return f;
}
int main()
{
	printf("f(2.5)\t\t= %f\n",f(2.5));
	printf("f(f(0.25))\t= %f\n",f(f(0.25)));
	printf("f(f(f(-1.5)))\t= %f\n",f(f(f(-1.5))));
	
	return 0;
}