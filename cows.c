#include <stdio.h>

int main(){
  int cows;
  printf("How many cows do you have? ");
  scanf("%d",&cows);
  if(cows == 1){
    printf("You only have %d fucking cow!!!!!\n",cows);
  }
  else if(cows > 200){
    printf("I don't believe you!\n");
  }
  else if(cows > 1){
    printf("You have %d fucking cows!!!!!\n",cows);
  }
  else{
    printf("That's impossible!!!\n");
  }
  return(0);
}
