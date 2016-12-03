#define N 20 /* max number in lottery */
#define M 20 /* number of numbers in lottery */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

  int 	i,
		j,
		match,
		a[M];

  srand((unsigned int)time(NULL)); /* One time only */
  
  for(i = 0; i < M; i++){
    do{
      a[i] = rand() % N + 1;
      for(j = 0, match = 0; j < i; j++)
	if(a[i] == a[j]) match = 1; 	  
    }while(match);
    printf("a[%d] = %d\n", i, a[i]);
  }
    
}