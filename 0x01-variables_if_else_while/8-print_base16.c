#include <stdio.h>

/**
 * main - print all base 16 numbers
 *
 * Return: zero
 */

int main(void)
{
	int i;
	char hex [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char hexx[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	for (i = 0; i < 9; i++)
	{
		putchar(hex[i]);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(hexx[i]);
	}
	putchar('\n');
	return (0);

}
