#include <stdio.h>
int main()
{
	char letter1, letter2;
	int l1,l2;
	letter1 = 'A';
	letter2 = 'g';
	printf("%c = %d\n%c = %d",letter1,l1 = (int) letter1,letter2, l2 = (int) letter2);
	return 0;
}