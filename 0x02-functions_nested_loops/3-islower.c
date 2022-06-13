#include "main.h"

/**
 * _islower - returns 1 if character is lowercase
 * @c: character to be tested
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
