#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of a number
 * @x: number to be checked
 *
 * Return: the digit
 */

int print_last_digit(int x)
{
	int dig = abs(((x % 10)*10) + (x% 10));

	return (dig);

}
