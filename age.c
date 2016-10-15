#include<stdio.h>
int main(){
	int age;

	printf("\nHello Everyone\n\n");
	printf("What is your age? ");
	scanf("%d",&age);
	printf("\nCongratulations you will be %d next birthday!\n", ++age);
	return(0);
}
