#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - multiplies two numvers
* @argc: no of arguments
* @argv: array of arguments
* Return: zero
*/

int main(int argc, char *argv[])
{
unsigned long num1;
unsigned long num2;
unsigned long result;
int i;
int j;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

  
num1 = atol(argv[1]);
num2 = atol(argv[2]);

/*while (i < argc)
{
while (argv[i][j] != '\0')
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
j++;
}
i++;
}
*/
  
  for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
result = num1 * num2;
  
printf("%lu\n", result);

return (0);
}
