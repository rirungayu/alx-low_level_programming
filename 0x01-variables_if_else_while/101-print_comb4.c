#include <stdio.h>

/**
 * main - prints all 3 digit combinations
 *
 * Return: zero
 */

int main(void)
{
	int number = 0;
	int max = 1000;

	while (number < max)
	{
		int first = number / 100;
		int second = number / 10 % 10;
		int third = number % 10;

		number = number + 1;
		if (first == second || second == third || first == third)
		{continue;
		}
		if (first > second || second > third)
		{
			continue;
		}
		putchar(first % 10 + '0');
		putchar(second % 10 + '0');
		putchar(third % 10 + '0');
		if (number == 790)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
