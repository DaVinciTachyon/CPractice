#include<stdio.h>
int main(){
  int mAge,
      fAge,
      yAge,
      mfyAge;
  printf("What is your mother's age?\t");
  scanf("%d",&mAge);
  printf("What is your father's age?\t");
  scanf("%d",&fAge);
  printf("What is your your age?\t\t");
  scanf("%d",&yAge);
  mfyAge = mAge + fAge + yAge;
  printf("Your mother's age, your father's age and your age add up to %d years.\n",mfyAge);
  return(0);
}
