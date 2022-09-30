#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: number of argument
 * @argv: list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argc >= 3)
	{
		int i = 0;
		int sum = 0;

		while (i < argc)
		{
			if (isdigit(argv[i]))
			{
				sum = sum + strtol(argv[i], NULL, 10);
			}
			else
			{
			printf("Error\n");
			return (1);
			}
		i++;
		}
		printf("%d\n", sum);
	}
		return (0);
}
