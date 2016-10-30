#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define N 1000000000 /*Number of Throws*/
int main()
{
  int nhits = 0;
  int i;
  float x, y, r;
  srand((int)time(NULL)); /*Starts the engine on the RNG, Only One*/
  for(i = 0; i < N; i++) /*Do this N time*/
  {
    x = (float)rand()/RAND_MAX; /*0 to 1*/
    y = (float)rand()/RAND_MAX; /*0 to 1*/
    r = sqrt((x - 0.5) * (x- 0.5) + (y - 0.5) * (y - 0.5));
    if(r<= 0.5) nhits++;
  } /*Done Throwing Darts*/
  printf("Pi is approximately %.6f\n",(float)4*nhits/N);
  return 0;
} /*End of Main*/
/*Measure Average |err| for N and plot against N*/
