#include<stdio.h>
int main() {
  float dollars,
        euros;
  printf("Please tell me the amount of dollars you have.\nWrite it here: $");
  scanf("%f",&dollars);
  euros = dollars * 0.9;
  printf("You have €%.2f.\n",euros);
  return 0;
}
