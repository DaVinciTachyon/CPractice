#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int rnd;
  char rps[10];
  srand((int)time(NULL));
  rnd = rand()%3+1;
  printf("Let's Play: Rock, Paper, Scissors.\nIf you want to stop, type 'stop'.\n\n");
  do{
    printf("What do choose? ");
    scanf("%s",rps);
    if(rnd == 1){
      printf("\nRock.\n\n");
      if(strcmp(rps, "rock") == 0 || strcmp(rps, "Rock") == 0) printf("It's a draw.\n");
      else if(strcmp(rps, "paper") == 0 || strcmp(rps, "Paper") == 0) printf("You win...\n");
      else if(strcmp(rps, "scissors") == 0 || strcmp(rps, "Scissors") == 0) printf("I win!!!!\n");
    }
    if(rnd == 2){
      printf("\nPaper.\n\n");
      if(strcmp(rps, "rock") == 0 || strcmp(rps, "Rock") == 0) printf("I win!!!!\n");
      else if(strcmp(rps, "paper") == 0 || strcmp(rps, "Paper") == 0) printf("It's a draw.\n");
      else if(strcmp(rps, "scissors") == 0 || strcmp(rps, "Scissors") == 0) printf("You win...\n");
    }
    if(rnd == 3){
      printf("\nScissors.\n\n");
      if(strcmp(rps, "rock") == 0 || strcmp(rps, "Rock") == 0) printf("You win...\n");
      else if(strcmp(rps, "paper") == 0 || strcmp(rps, "Paper") == 0) printf("I win!!!!\n");
      else if(strcmp(rps, "scissors") == 0 || strcmp(rps, "Scissors") == 0) printf("It's a draw.\n");
    }
  } while(strcmp(rps, "stop") != 0);
  return 0;
}
