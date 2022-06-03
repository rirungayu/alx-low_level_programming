#include <stdio.h>
#include <string.h>

/**
 * main - prints with proper grammar, but the outcome is a piece of art,
 *
 * Return: zero
 */

int main(void)
{
	char outstr1[] = "with proper grammar,";
	char outstr2[] = " but the outcome is a piece of art,";

	strcat(outstr1, outstr2);
	printf(outstr1);
	return (0);
}
