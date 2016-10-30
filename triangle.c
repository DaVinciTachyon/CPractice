#include<stdio.h>
#include<math.h>
int main() {
  /*Declarations*/
  float adj,
        opp,
        hyp,
        p,
        A;
  /*Asking for the adjacent side*/
  printf("What is the adjacent side's length? ");
  scanf("%f",&adj);
  /*Asking for the oppoosite side*/
  printf("What is the opposite side's length? ");
  scanf("%f",&opp);
  /*Finding the hypotenuse*/
  hyp = sqrt(pow(adj,2) + pow(opp,2));
  printf("The hypotenuse of the triangle is %1.4f.\n",hyp);
  /*Finding the perimeter*/
  p = hyp + adj + opp;
  printf("The perimeter of the triangle is %1.4f.\n",p);
  /*Finding hte area*/
  A = (opp * adj)/2;
  printf("The area of the triangle is %1.4f.\n",A);

  return 0;
}
