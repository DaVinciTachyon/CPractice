#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *rightChildNode; //Larger
  struct node *leftChildNode; //Smaller
};

void insert(int);
void search(int);
void sort(struct node *);

struct node *root;

int main()
{
  int dataset[20] = {234,45,1243,87,1,24,75,85,65,2,43,87,4445,23,55453,65,774,7476,456,76478};
  int i;
  extern struct node *root;

  for(i = 0, root = NULL; i < sizeof(dataset)/sizeof(dataset[0]); i++)
    insert(dataset[i]);

  //search(45);

  sort(root);

  return 0;
}

void insert(int value)
{
  struct node *temp = (struct node*) malloc(sizeof(struct node));
  extern struct node *root;

  temp->value = value;
  temp->leftChildNode = NULL;
  temp->rightChildNode = NULL;

  if(root == NULL)
    root = temp;
  else
  {
    struct node *current;
    struct node *parent;
    current = root;
    while(1)
    {
      parent = current;
      if(value < parent->value)
      {
        current = current->leftChildNode;
        if(current == NULL)
        {
          parent->leftChildNode = temp;
          return;
        }
      }
      else
      {
        current = current->rightChildNode;
        if(current == NULL)
        {
          parent->rightChildNode = temp;
          return;
        }
      }
    }
  }
}

void search(int value)
{
  extern struct node *root;
  struct node *current = root;

  while(current->value != value)
  {
    if(current != NULL)
    {
      printf("%d ",current->value);
  		if(current->value > value)
        current = current->leftChildNode;
      else
        current = current->rightChildNode;
    }
    if(current == NULL)
    {
      printf("No\n");
      return;
    }
  }
  printf("%d now\n", current->value);
}

void sort(struct node *root)
{
  struct node *current = root;

  if(current->leftChildNode != NULL)
    sort(current->leftChildNode);
  printf("%d\n", current->value);
  if(current->rightChildNode != NULL)
    sort(current->rightChildNode);
}
