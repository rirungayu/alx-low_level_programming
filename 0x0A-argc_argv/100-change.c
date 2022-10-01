#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates change
 * @argc: number of args
 * @argv: list of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int amount;
	int denoms[] = {25, 10, 5, 2, 1};
	int count = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	amount = atoi(argv[1]);
	}

	if (amount < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (count < 5)
		{
			int curr = denoms[count];

			if (amount >= curr)
			{
				coins += amount / curr;
				amount = amount % curr;
			}
			count++;
		}
		printf("%d\n", coins);
	}
	return (0);
}

