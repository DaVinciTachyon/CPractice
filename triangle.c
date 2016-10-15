#include<stdio.h>
#include<math.h>
int main() {
  float adj,
        opp,
        hyp,
        p,
        A;
  printf("What is the adjacent side's length? ");
  scanf("%f",&adj);
  printf("What is the opposite side's length? ");
  scanf("%f",&opp);
  hyp = sqrt(pow(adj,2) + pow(opp,2));
  printf("The hypotenuse of the triangle is %1.4f.\n",hyp);
  p = hyp + adj + opp;
  printf("The perimeter of the triangle is %1.4f.\n",p);
  A = (opp * adj)/2;
  printf("The area of the triangle is %1.4f.\n",A);
  return 0;
}
