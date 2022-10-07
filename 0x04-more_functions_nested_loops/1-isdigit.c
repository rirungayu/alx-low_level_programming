#include <stdio.h>
#include "main.h"

/*
 * _isdigit - checks if input is a digit
 * @c: input to be tested
 * Return: if digit return 1, if not return 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

