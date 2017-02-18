#include <stdio.h>
#include <math.h>

int lcm(int n1, int n2, int n3);
int HCF(int num1, int num2);

int main()
{
  int a,
      b,
      f;

  a = 0;
  f = 1;

  while(f)
  {
    if(a % 3 == 1 && a % 4 == 2 && a % 5 == 4)
      f = 0;
    else
      a++;
  }

  b = a + lcm(3, 4, 5);

  printf("a = %d, and b = %d.\n", a, b);

  return 0;
}

int lcm(int n1, int n2, int n3)
{
  int a,
      hcf;
  hcf = HCF(HCF(n2, n3), HCF(HCF(n1, n2), HCF(n1, n3)));

  a = n1 * n2 * n3 / pow(hcf, 3);

  return a;
}

int HCF(int num1, int num2)
{
	int	rem;

	if(num1 < 0 || num2 < 0)
		printf("You numbers must be positive.\n");

	if(num1 >= 0 && num2 >= 0)
	{
		if(num2 > num1)
		{
			int temp;

			temp = num2;
			num2 = num1;
			num1 = temp;
		}

		do
		{
			rem = num1 % num2;
			num1 = num2;
			num2 = rem;
		} while(rem != 0);
	}

	return num1;
}
