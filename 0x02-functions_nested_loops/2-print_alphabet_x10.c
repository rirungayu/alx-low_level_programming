#include "main.h"

/**
 * print_alphabet_x10 - print 10 times
 *
 * Retirn : 0
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 26; i++)
		{
		_putchar(str[i]);
		}
		_putchar('\n');
	}
}
