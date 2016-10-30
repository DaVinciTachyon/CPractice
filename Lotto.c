#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
  int totNum,
      num[6],
      i;
  totNum = 49;

  printf("Your Lotto Numbers are: ");
  srand(time(0));
  rand(); rand();
  for(i = 0; i < 6; i++){
    num[i]=rand()%totNum+1;
    printf("%d, ",num[i]);
  }
  printf("\n");
  return 0;
}
