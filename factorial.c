#include <stdio.h>
int fact(int i) {
  unsigned int c, a = 1, j = 1, m = i;
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
  return a;
}
