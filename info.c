#include <stdio.h>

struct info
{
	char	name[100],
			nationality[20];
	int age;
};


int main()
{
	struct info man;
	
	printf("What is your name?\n\t");
	gets(man.name);
	
	printf("What is your nationality?\n\t");
	gets(man.nationality);
	
	printf("What is your age?\n\t");
	scanf("%d", &man.age);
	
	printf("Your name is %s.\n", man.name);
	printf("Your nationality is %s.\n", man.nationality);
	printf("You are %d years old.\n", man.age);
	
	return 0;
}