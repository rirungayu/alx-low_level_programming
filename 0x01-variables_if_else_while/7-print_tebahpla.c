#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: zero
 */

int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(ch[i]);
	}
	putchar('\n');

	return (0);
}
