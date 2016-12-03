#include<stdio.h>
int fac(int);
int fac(int n){
	return n>1?n*fac(n-1):1;
}
void main(){
	printf("fac(7)=%d\n",fac(7));
}