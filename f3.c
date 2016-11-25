#include <stdio.h>
#include <math.h>

#define PI 3.14159

float f(float x, float y)
{
	float	f;
	
	if (x < 0 && y < 0) f = sin(x * y);
	else if (x >= 0 && y < 0) f = x*x*y*y;
	else if (x < 0 && y >= 0) f = 2 * x + y;
	else f = x / (y +1);
	
	return f;
}
int main()
{
	printf("f(2.5,1.5)\t= %f\n",f(2.5,1.5));
	printf("f(0,0.25)\t= %f\n",f(0,0.25));
	printf("f(-1.5,2.5)\t= %f\n",f(-1.5,2.5));
	
	return 0;
}