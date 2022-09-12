#include <stdio.h>

/**
 * main - prints all 2 digit combinations
 *
 * Return: zero
 */

int main(void)
{
	int number = 0;
	int max = 100;

	while (number < max)
	{
		int first = number / 10;
		int second = number % 10;

		number = number + 1;
		if (first - second >= 0)
		{
			continue;
		}
		putchar(first % 10 + '0');
		putchar(second % 10 + '0');

		if (number == 90)
		{
			putchar(' ');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
