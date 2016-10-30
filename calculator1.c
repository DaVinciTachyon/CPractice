#include <stdio.h>
#include <math.h>
#define N 3
int main()
{
  int i[2], /*Inputs*/
      r; /*Result*/
  char  o, /*Operator*/
        dumpC;

  for(int j = 0; j < N; j++)
  {
    printf("Type an operation you want completed with two inputs (value1 +,-,x,/,%%,^ value2):\n");
    scanf("%d %c %d%c",&i[0],&o,&i[1],&dumpC);

    switch (o) {
      case '+':
        r = i[0] + i[1];
        printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
        break;
      case '-':
        r = i[0] - i[1];
        printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
        break;
      case 'x': case '*':
        r = i[0] * i[1];
        printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
        break;
      case '/':
        r = i[0] / i[1];
        printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
        break;
      case '%':
          r = i[0] % i[1];
          printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
          break;
      case '^':
        r = pow(i[0], i[1]);
        printf("\n%d %c %d = %d\n\n",i[0],o,i[1],r);
        break;
      default:
        printf("\nYou typed in something I do not recognise.\nTry Again.\n\n");
        break;
    }
  }

  return 0;
}
