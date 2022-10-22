#include "main.h"

/**
* _strchr - locates a character in a string
*
* @s: The string to check
* @c: The character to find
*
* Return: Pointer to the first occurence of c
*
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return null;
}
