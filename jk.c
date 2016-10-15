#include <stdio.h>
int main() {
	float num;
	char dumpChar;
	printf("Put in a big number: ");
	scanf("%f%c",&num,&dumpChar);
	int i=1;
	while (i<=num){
		printf("No you're not...\n");
		i++;
	}
	return 0;
}
