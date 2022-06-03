#include <stdio.h>
/**
 * main - prints with proper grammar, but the outcome is a piece of art,
 *
 * Return: zero
 */

int main(void)
{
	char outstr1[] = "prints with proper grammar,";
	char outstr2[] = "but the outcome is a piece of art,";

	printf(outstr1, outstr2);
	return (0);
}
