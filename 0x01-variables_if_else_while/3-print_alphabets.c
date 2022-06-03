#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: zero
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char STR[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n = 26;
	int i;

	for (i = 0; i < n; ++i)
	{
		putchar(str[i]);
	}
	for (i = 0; i < n; ++i)
	{
		putchar(STR[i]);
	}
	putchar('\n');
	return (0);
}
