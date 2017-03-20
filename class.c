#include <stdio.h>
#include <string.h>

int main()
{
	char name[25];
	int i;
    
	printf("here you go: ");
	scanf("%s", &name);
    
	printf("%s\n", name);
    
	for(i = 0; i < 25; i++)
		printf("%c", name[i]);

	printf("\n");
	
	for(i = 0; i < 25 && name[i] != '\0'; i++)
        	printf("%c", name[i]);
        
    	return 0;
}