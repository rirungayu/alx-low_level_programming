#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: zero
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 26;

	for (int i = 0; i < n; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
