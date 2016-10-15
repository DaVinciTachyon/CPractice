#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define N 6

int main(){

  int num1;

  printf("time()=%ld\n",time(NULL));

  srand((unsigned)time(NULL));

  num1=rand()%N+1;
  printf("num1=%d\n",num1);

  return 0;

}
