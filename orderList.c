#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 500
#define L 50
#define NL 20

void describeProgram(void);
void fileNaming(char fileName[NL], char outputName[NL]);
int extractContent(char fileName[NL], char content[N][L]);
void sortList(char content[N][L], int lengthOfFile);
void sortPair(char temp[2][L], int element);
void outputFile(char content[N][L], char outputName[NL], int lengthOfFile);

int main()
{
  char  fileName[NL],
        outputName[NL],
        content[N][L];
  int lengthOfFile;

  describeProgram();

  fileNaming(fileName, outputName);

  lengthOfFile = extractContent(fileName, content);

  sortList(content, lengthOfFile);

  outputFile(content, outputName, lengthOfFile);

  return 0;
}

void describeProgram(void)
{
  printf("This program orders a list separated by spaces or new lines by ascii code, and outputs the result into a new file.\n");
}

void fileNaming(char fileName[NL], char outputName[NL])
{
  printf("What is the name of the file you would like to sort?\n\t");
  gets(fileName);
  printf("What is the name of the file you would like to output?\n\t");
  gets(outputName);
}

int extractContent(char fileName[NL], char content[N][L])
{
  FILE *fileToSort;
  fileToSort = fopen(fileName, "r");

  int i,
      j,
      lengthOfFile;

  for(i = 0, lengthOfFile = 0; i < N && lengthOfFile == 0; i++)
  {
    fscanf(fileToSort, "%s", content[i]);
    if(content[i][0] == '\0')
      lengthOfFile = i;

    //j = 0;

    //while(content[i][j] != '\0')
    //{
      //if(content[i][j] >= 65 && content[i][j] <= 90)
        //content[i][j] += 32;
      //j++;
    //}

  }

  fclose(fileToSort);

  return lengthOfFile;
}

void sortList(char content[N][L], int lengthOfFile)
{
  char temp[L];
  int i, j;
  for (i = 0; i < lengthOfFile; i++)
  {
    for (j = 0; j < lengthOfFile - i - 1; j++)
    {
      if(content[j][0] > content[j + 1][0])
      {
        strcpy(temp, content[j]);
        strcpy(content[j], content[j + 1]);
        strcpy(content[j + 1], temp);
      }
      else if(content[j][0] == content[j + 1][0])
      {
        char temp[2][L];
        strcpy(temp[0], content[j]);
        strcpy(temp[1], content[j + 1]);
        sortPair(temp, 1);
        strcpy(content[j], temp[0]);
        strcpy(content[j + 1], temp[1]);
      }
    }
  }
}

void sortPair(char pairToSort[2][L], int element)
{
  char temp[L];

  if(pairToSort[0][element] > pairToSort[1][element])
  {
    strcpy(temp, pairToSort[0]);
    strcpy(pairToSort[0], pairToSort[1]);
    strcpy(pairToSort[1], temp);
  }
  else if(pairToSort[0][element] == pairToSort[1][element])
  {
    char temp[2][L];
    strcpy(temp[0], pairToSort[0]);
    strcpy(temp[1], pairToSort[1]);
    sortPair(temp, element + 1);
    strcpy(pairToSort[0], temp[0]);
    strcpy(pairToSort[1], temp[1]);
  }
}

void outputFile(char content[N][L], char outputName[NL], int lengthOfFile)
{
  FILE *fileToOutput;
  int i;

  fileToOutput = fopen(outputName, "w");

  for(i = 0; i < lengthOfFile; i++)
    fprintf(fileToOutput, "%s\n", content[i]);

  fclose(fileToOutput);
}
