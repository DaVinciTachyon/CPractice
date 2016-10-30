#include <stdio.h>
int fact(int i) {
  unsigned int c, a = 1, j = 1, m = i;
  if(i>0){
    if(i%2==0){
      while(j <= i/2){
        c = j * m;
        a *= c;
        m--; j++;
      }
    }
    else{
      while(j < (i+1)/2){
        c = j * m;
        if(j+1==m-1){
          a = a * c * --m;
        }
        else{
          a *= c;
        }
        m--; j++;
      }
    }
  }
  else if(i==0) a = 1;
  else printf("Your input for the factorial function is invalid.\n");
  return a;
}
