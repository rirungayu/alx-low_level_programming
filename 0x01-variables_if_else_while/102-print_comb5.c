
#include <stdio.h>

/**
 * main - prints all sets of two 2 digit combinations
 *
 * Return: zero
 */

int main(void)
{
	int number1 = 0;
	int max = 100;

	while (number1 < max)
	{
		int first1 = number1 / 10;
		int second1 = number1 % 10;
		int number2 = number1 + 1;

		number1 = number1 + 1;
		while (number2 < max)
		{
			int first2 = number2 / 10;
			int second2 = number2 % 10;

			number2 = number2 + 1;
			putchar(first1 % 10 + '0');
			putchar(second1 % 10 + '0');
			putchar(' ');
			putchar(first2 % 10 + '0');
			putchar(second2 % 10 + '0');
			putchar(',');
			putchar(' ');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
