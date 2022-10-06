#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array
* @size: size of array
* @c: initial value
* Return: pointer to array or null
*/

char *create_array(unsigned int size, char c)
{
    char *chars;

    chars = malloc(size);
    
    if (size == 0)
		  return ('\0');
      
    if (chars == NULL)
		  return ('\0');
      
    char[0] = c;
    chars[size] = '\0';
	
  return (arr);  
  }
