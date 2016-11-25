#include<stdio.h>
#include<math.h>
int S(int n)
{
	if(n==0) return 1;
	else return sqrt(2*M_PI)*pow(n,n+0.5)*exp(-1*n);
}
int G(int n)
{
	if(n==0) return 1;
	else return sqrt((2*n + 1./3.)*M_PI)*pow(n,n)*exp(-1*n);
}
int fac(int n)
{
	int m = 1,i;
	
	for(i=1;i<=n;i++)
	{
		m*=i;
	}
	return m;
}
int main()
{
	int i=0,s,g;
	do
	{
		printf("[n = %d, S(%d) = %d, G(%d) = %d, %d! = %d]\n",i,i,s=S(i),i,g=G(i),i,fac(i));
		i++;
	} while(s<=4985||g<=4985);
	
	return 0;
}