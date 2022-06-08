#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints entire alphabet
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
	_putchar(alphabet[i]);
	i++;
	}
}
