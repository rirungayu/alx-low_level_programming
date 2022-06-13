#include "main.h"

/**
 * _isalpha - checks if alphabetical character
 * @c: character to be checked
 *
 * Return: always 0
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
