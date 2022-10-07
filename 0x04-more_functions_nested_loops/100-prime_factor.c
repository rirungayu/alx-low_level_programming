#include <stdio.h>
#include "main.h"

/**
 * print_number - prints any integer
 * Return: nothing
 */

void print_number(int n)
{


	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n /10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}
