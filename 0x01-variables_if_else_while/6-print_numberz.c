#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: zero
 */

int main(void)
{

	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
