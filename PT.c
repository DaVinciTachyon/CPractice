#include <stdio.h>
#include "ChooseFunc.c"
#define M 13
int main() {
  int l;
  do{
    printf("Enter the highest order line you want: ");
    scanf("%d",&l);
    if(l<0) printf("There is no negative order available.\n");
    else if(l<=M){
      for(int j = 0; j <= l; j++){
        for(int m = 1; m <= l - j; m++) {
          printf("\t");
        }
        for (int i = 0; i <= j; i++) {
          printf("%u\t\t",choose(j,i));
        }
        printf("\n\n");
      }
    }
    else printf("The current limit is %d lines.\nTry Again\n",M);
  } while (l>M||l<0);
  return 0;
}
