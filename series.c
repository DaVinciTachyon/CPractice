#include <stdio.h>

int main()
{
	double a[50];
	int i;
	
	printf("What is the first value of your series? ");
	scanf("%lf", &a[0]);
	printf("What is the second value of your series? ");
	scanf("%lf", &a[1]);
	
	for(i = 2; i < 50; i++)
		a[i] = 2 * a[i - 1] + a[i - 2];
	
	printf("a[5] = %lf\n", a[5 - 1]);
	printf("a[10] = %lf\n", a[10 - 1]);
	printf("a[50] = %lf\n", a[50 - 1]);
	
	return 0;
}