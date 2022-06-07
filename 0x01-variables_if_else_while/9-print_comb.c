#include <stdio.h>

/**
 * main - print all combinations of single digit numbers
 *
 * Return: zero
 */

int main(void)
{
	int numz[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(numz[i] + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
