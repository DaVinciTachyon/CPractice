#include <stdio.h>
int main() {
  float dim1,
        dim2,
        dim3,
        costWallpaper,
        costPaint,
        costCarpet,
        totalCost;
  printf("What is the width of the room?\t");
  scanf("%f",&dim1);
  printf("What is the height of the room?\t");
  scanf("%f",&dim2);
  printf("What is the depth of the room?\t");
  scanf("%f",&dim3);
  printf("What is the cost of the wallpaper for every square metre?\t€");
  scanf("%f",&costWallpaper);
  printf("What is the cost of the paint for every square metre?\t\t€");
  scanf("%f",&costPaint);
  printf("What is the cost of the carpet for every square metre?\t\t€");
  scanf("%f",&costCarpet);
  totalCost = (2 * costCarpet * dim3 * dim2 + 2 * costCarpet * dim1 * dim2) + (costCarpet * dim1 * dim3) + (costPaint * dim1 * dim2);
  printf("The cost of decorating the room is €%1.2f.\n",totalCost);
  return 0;
}
