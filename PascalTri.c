#include <stdio.h>
long fact(int);
int main() {
  int line, i, j;
  printf("Enter the number of lines you want: ");
  scanf("%d",&line);
  for (int i = 0; i < line; i++) {
    for (int j = 0; j < line - i - 1; j++) {
      printf(" ");
    }
    for (int j = 0; j < line - i - 1; j++) {
      printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
    }
    printf("\n");
  }
  return 0;
}
long fact(int num){
  long f = 1;
  int i = 1;
  while (i <= num) {
    f = f * i;
    i++;
  }
  return f;
}
