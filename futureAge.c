#include<stdio.h>
int main(){
	int age, add, future;
	printf("What is your age?\t\t\t\t");
	scanf("%d",&age);
	printf("How many years do you want to add to your age?\t");
	scanf("%d",&add);
	future = add + age;
	printf("In %d years you will be %d years old.\n",add,future);
	return(0);
}
