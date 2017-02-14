#include <stdio.h>
int main()
{
  int n;

  printf("\nWhat number's factors do you want?\n");
  scanf("%d", &n);
  printf("\nThe factors are:\n");
  for (int i = 1; i <= n; i++) {
    if(n % i == 0)
    {
      if(i == 1) printf("%d,", i);
      else if(i == n) printf(" %d.\n\n", i);
      else printf(" %d,", i);
    }
  }

  return 0;
}
