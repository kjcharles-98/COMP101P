// Written by <put your name and current date here>
// This program displays my name.
//COMP101P Exercises 1
#include <stdio.h>
#include <string.h>
int main(void)
{
  char myName[] = "Charles";
  printf("Hello, my name is %s\n", myName);

  int index = strlen(myName) - 1;
  while (index > -1)
  {
    printf("%c", myName[index]);
    index = index - 1;
  }
  printf("\n");
  return 0;
}
