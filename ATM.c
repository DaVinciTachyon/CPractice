#include <stdio.h>
int main()
{
  int pin = 1234, op, try, cor=0, incor=0;
  do
  {
  printf("Hello dear Sir/Madam,\nthis is an ATM.\n\nYour options for continuing are:\n1. Enter your PIN and verify whether it is correct.\n2. Change your pin. \n3. Display the number of times you entered your PIN correctly and incorrectly.\n4. Exit Program.\n\nEnter your desired option: ");
  scanf("%d",&op);
    switch (op) {
      case 1:
        do
        {
          printf("Enter your PIN: \n");
          scanf("%d",&try);
          if(pin!=try) {printf("Try Again.\n"); incor++;}
          else {printf("You entered the correct PIN.\n\n"); cor++;}
        } while(pin!=try);
        break;
      case 2:
        printf("What is your new 4 digit PIN: \n");
        scanf("%d",&pin);
        printf("Your new PIN is %d\n\n",pin);
        break;
      case 3:
        printf("You entered the PIN correctly %d times, and incorrectly %d times.\n\n",cor,incor);
        break;
    }
  if(op!=1&&op!=2&&op!=3&&op!=4) printf("That is not a possible option.\nTry Again.\n\n");
  } while (op!=4);
}
