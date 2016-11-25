#include<stdio.h>
int main()
{
	int m,
		n,
		s,
		r;
	do
	{
		printf("Input a number: ");
		scanf("%d",&n);
		printf("Input another number: ");
		scanf("%d",&m);
		if(m<0||n<0) printf("You numbers must be positive.\n");
		if(m>=0&&n>=0)
		{
			if(m>n)
			{
				s = m;
				m = n;
				n = s;
			}
			r = 1;
			do
			{
				r = n%m;
				n = m;
				m = r;
			} while(r!=0);
	
			printf("The greatest common divisor is %d",n);
		}
	
	} while(m<0||n<0);
	
	return 0;
}