#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable
 *
 * Return: zero
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	lastdigit == 0 ?
	printf("Last digit of %d is %d and is 0\n", n, lastdigit) :
	lastdigit > 5 ?
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit) :
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	return (0);
}
