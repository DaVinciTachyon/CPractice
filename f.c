#include <stdio.h>
#include <math.h>

float f(float);

float f(float x)
{
	float f;
		
	
	if (x < 0) f = -1 * x;
	else if (x < 7) f = x;
	else if (x < 9) f = cos(x);
	else f = pow(x, 1/3);
	
	return f;
}

int main()
{
	float x;

	printf("Choose a number: ");
	scanf("%f",&x);

	printf("f(%f) = %f\n",x,f(x));
	printf("f(f(%f)) = %f\n",x,f(f(x)));

	return 0;
}