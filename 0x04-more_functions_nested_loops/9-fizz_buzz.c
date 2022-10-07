#include <stdio.h>

/**
 * main - a function to check for common multiples
 *
 * Return: always zero
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", n);
	n++;
	}
	printf("\n");

	return (0);
}
