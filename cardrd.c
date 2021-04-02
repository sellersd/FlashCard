#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct card
{
  int ID;
  char question[255];
  char soln[255];
};

int main(int argv, char* argc[])
{
  // Input file pointer
  FILE *fptr;

  // Open file
  fptr = fopen("cards.dat", "r");
  // Check if file opened successfully
  if(!fptr)
  {
    printf("File failed to open.\n");
    exit(-1);
  }

  // Read lines
  char line[300];
  while(fgets (line, 300, fptr) != NULL)
  {
    int pos = -1;
    for(int i = 0; i < 255; i++)
    {
      if(line[i]==',')
      {
        pos = i;
      }
    }
    printf("The line is: %s", line);
    printf("The comma is at position: %d\n\n", pos);
    char* q[45];
    char* s[255];
    s = (void *)(&line[pos]);
    printf("The question is: %s\n", q);
    printf("The solution is: %s\n", s);
  }

  // Close FILE
  fclose(fptr);


  // Test struct
  struct card deck[3];
  for(int i = 0; i < 3; i++)
  {
    deck[i].ID = i + 10;
    strcpy(deck[i].question, "Hello");
    strcpy(deck[i].soln, "Goodbye");
  }


  printf("Hello, World!\n");
  for(int i=0; i<3; i++)
  {
    printf("Card ID: %d\n", deck[i].ID);
    printf("Card Question: %s\n", deck[i].question);
    printf("Card Solution: %s\n", deck[i].soln);

  }
  return EXIT_SUCCESS;
}
