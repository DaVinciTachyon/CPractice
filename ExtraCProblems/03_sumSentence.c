#include <stdio.h>
#define N 100

int main()
{

  int   i,
        is[N],
        sum;
  char  s[N];

  printf("Tell me something:\n\t");
  scanf("%s", &s);

  for(i = 0, sum = 0; i < N - 1; i++)
  {
    if(s[i] >= 'a' && s[i] <= 'z')
      sum += s[i] - 'a' + 1;
    else if(s[i] >= 'A' && s[i] <= 'Z')
      sum += s[i] - 'A' + 1;
    if(s[i] == 0)
      break;
  }

  printf("The sum value of all the letters is %d.\n", sum);
  
  return 0;
}
