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
	}
	else if (argc >= 2)
	{
		int i = 1;
		long sum = 0;

		while (i < argc)
		{
			long curr = atoi(argv[i]);
			if(isdigit(curr) || curr < 0)
			{
				printf("Error\n");
				return (1);
			}
		sum = sum + curr;
		i++;
		}
		printf("%ld\n", sum);
	}
		return (0);
}
