#include <stdio.h>

/**
 * main - prints number of arguments passes
 * @argc: first argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arguments = argc - 1;

	argv[0] = argv[0];
	printf("%d\n", arguments);
	return (0);
}
