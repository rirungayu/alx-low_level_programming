#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two integers
 *@argc: number of args
 *@argv: array of args
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%ld\n", strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
