#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME_LENGTH 20 	//Determines the max length for a file name
#define NUMBER_ELEMENTS 500		//Determines the maximum number of elements in a list
#define STRING_LENGTH 50		//Determines the maximum length of an element of a list

void describeProgram(void);
void nameFiles(char inputName[FILE_NAME_LENGTH], char outputName[FILE_NAME_LENGTH]);
int extractContent(char inputName[FILE_NAME_LENGTH], char content[NUMBER_ELEMENTS][STRING_LENGTH]);
void sortList(char content[NUMBER_ELEMENTS][STRING_LENGTH], int element, int lengthOfFile);
void outputFile(char content[NUMBER_ELEMENTS][STRING_LENGTH], char outputName[FILE_NAME_LENGTH], int lengthOfFile);

int main()
{
	char	inputName[FILE_NAME_LENGTH],
			outputName[FILE_NAME_LENGTH],
			content[NUMBER_ELEMENTS][STRING_LENGTH];
	int lengthOfFile;
	
	describeProgram();
	
	nameFiles(inputName, outputName);
	
	lengthOfFile = extractContent(inputName, content);

	sortList(content, 0, lengthOfFile);

	outputFile(content, outputName, lengthOfFile);

	return 0;
}

/*Tells the user what the program does*/
void describeProgram(void)
{
	printf("An inputted file is ordered by ascii code and returns an ordered file.\n");
}

/*Allows the user to choose an input file and name the output file*/
void nameFiles(char inputName[FILE_NAME_LENGTH], char outputName[FILE_NAME_LENGTH])
{
  printf("What is the name of the file you would like to sort?\n\t");
  gets(inputName);
  printf("What is the name of the file you would like to output?\n\t");
  gets(outputName);
}

/*Extracts the unordered list from the text file*/
int extractContent(char inputName[FILE_NAME_LENGTH], char content[NUMBER_ELEMENTS][STRING_LENGTH])
{
	FILE *fileToInput;
	fileToInput = fopen(inputName, "r");

	int i,
		lengthOfFile;
		
	for(i = 0, lengthOfFile = 0; i < NUMBER_ELEMENTS && lengthOfFile == 0; i++)
	{
		fscanf(fileToInput, "%s", content[i]);
		if(content[i][0] == '\0')
		  lengthOfFile = i;
	}
  
  fclose(fileToInput);
  
  return lengthOfFile;
}

/*Sorts the list by ascii code*/
void sortList(char content[NUMBER_ELEMENTS][STRING_LENGTH], int element, int lengthOfFile)
{
	int i, j;
	
	for(i = 0; i < lengthOfFile; i++)
	{
		for(j = 0; j < lengthOfFile - i - 1; j++)
		{
			if(content[j][element] > content[j + 1][element])
			{
				char temp[STRING_LENGTH];
				strcpy(temp, content[j]);
				strcpy(content[j], content[j + 1]);
				strcpy(content[j + 1], temp);
			}
			else if(content[j][element] == content[j + 1][element])
			{
				char temp[2][STRING_LENGTH];
				strcpy(temp[0], content[j]);
				strcpy(temp[1], content[j + 1]);
				sortList(temp, element + 1, 2);
				strcpy(content[j], temp[0]);
				strcpy(content[j + 1], temp[1]);
			}
		}
	}
}

/*Outputs the ordered text file*/
void outputFile(char content[NUMBER_ELEMENTS][STRING_LENGTH], char outputName[FILE_NAME_LENGTH], int lengthOfFile)
{
	FILE *fileToOutput;
	int i;

	fileToOutput = fopen(outputName, "w");
	
	for(i = 0; i < lengthOfFile; i++)
		fprintf(fileToOutput, "%s\n", content[i]);
	
	fclose(fileToOutput);
}