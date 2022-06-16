#include "main.h"

/**
 * _abs - returns absolute value
 * @x: number to be changes
 *
 * Return: absolute value
 */

int _abs(int x)
{
int c;

if (x >= 0)
{
	c = x;
}
else
{
	c = x * -1;
}
	return (c);
}
