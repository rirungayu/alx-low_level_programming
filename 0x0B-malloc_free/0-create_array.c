#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c:initial values
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;
	
	chars = malloc(size);
	if (size == 0)
		return ('\0');
	
	if (chars == NULL)
		return ('\0');
	
	for (i = 0; i < size; i++)
		chars[i] = c;
	
	chars[size] = '\0';
	
	return (chars);  
}
