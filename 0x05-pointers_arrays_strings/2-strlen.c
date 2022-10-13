#include <stdio.h>
#include "main.h"

/**
* _strlen - gets the length of the string
* @s: string whose length to be checked
* Return: length
*/

int _strlen(char *s)
{
  int length = 0;
  
  while (s[length] != '\0')
  {
    length++;
  }
  
  return length;
}
