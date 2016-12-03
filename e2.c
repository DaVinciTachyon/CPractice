#include <stdio.h>
#include <math.h>
#define N 100
int main()
{
	float n,
		x,
		y,
		xnew,
		diff[N],
		delta,
		diffsum=0;
	int i;
	srand((unsigned)time(NULL));
	
	printf("What is your tolerance for error? ");
	scanf("%f",&delta);
	
	for(i = 0; i < N; i++)
	{
		n=rand();
		x=rand();
		y=rand();
	
		do
		{
			xnew = 1./3.*(2*y+x/pow(y,2));
			diff[i] = fabs(xnew-x);
			//printf("New guess: %f (exact %f) (|xnew - x| = %f)\n",xnew,pow(x,1./3.),diff[i]);
			x = xnew;
		} while((x>=pow(x,1./3.)+delta)||(x<=pow(x,1./3.)-delta));
		diffsum+=diff[i];
	}
	printf("The tolerance needed to find the square root to a precision of %f is %f",delta,diffsum/N);
	
	return 0;
}