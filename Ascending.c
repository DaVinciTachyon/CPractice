#include <stdio.h>
#include <math.h>
int main(){
  float x,y,z;
  printf("Give me three numbers: \n");
  printf("First:\t");
  scanf("%f",&x);
  printf("Second:\t");
  scanf("%f",&y);
  printf("Third:\t");
  scanf("%f",&z);
  printf("Thanks\n");

  if(x<=y&&y<=z){
    printf("%1.1f, %1.1f, %1.1f\n",x,y,z);
    if(y == z && x != y){
      printf("The two biggest numbers are the same.\n");
    }
  }
  else if(y<=x&&x<=z){
    printf("%1.1f, %1.1f, %1.1f\n",y,x,z);
    if(x == z && x != y){
      printf("The two biggest numbers are the same.\n");
    }
  }
  else if(z<=x&&x<=y){
    printf("%1.1f, %1.1f, %1.1f\n",z,x,y);
    if(x == y && x != z){
      printf("The two biggest numbers are the same.\n");
    }
  }
  else if(x<=z&&z<=y){
    printf("%1.1f, %1.1f, %1.1f\n",x,z,y);
    if(z == y && x != y){
      printf("The two biggest numbers are the same.\n");
    }
  }
  else if(z<=y&&y<=x){
    printf("%1.1f, %1.1f, %1.1f\n",z,y,x);
    if(x == y && x != z){
      printf("The two biggest numbers are the same.\n");
    }
  }
  else if(y<=z&&z<=x){
    printf("%1.1f, %1.1f, %1.1f\n",y,z,x);
    if(x == z && x != y){
      printf("The two biggest numbers are the same.\n");
    }
  }
  if(x == y && x == z){
    printf("The numbers are the same.\n");
  }

  return 0;
}
