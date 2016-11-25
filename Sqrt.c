#include <stdio.h>
#include <math.h>
#define N 100000
int main()
{
	float n,
		x,
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
	
		do
		{
			xnew = .5 * (x + n/x);
			diff[i] = fabs(xnew-x);
			//printf("New guess: %f (exact %f) (|xnew - x| = %f)\n",xnew,sqrt(n),diff[i]);
			x = xnew;
		} while((x>=sqrt(n)+0.05)||(x<=sqrt(n)-0.05)/*&&diff[i]>=delta*/);
		diffsum+=diff[i];
	}
	printf("The tolerance needed to find the square root to a precision of %f is %f",delta,diffsum/N);
	
	return 0;
}