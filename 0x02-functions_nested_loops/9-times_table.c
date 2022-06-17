#include "main.h"

/**
 * times_table - prints 9 times tables
 *
 * Return: nothing
 */

void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int f = j * i;
if (f > 9)
	_putchar((f / 10) + '0');
_putchar((f % 10) + '0');
if (j != 9)
	_putchar(',');
if (f < 10 && j != 9)
	_putchar(' ');
if (j < 9)
	_putchar(' ');
}
_putchar('\n');
}
}
