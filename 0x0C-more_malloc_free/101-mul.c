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
int i = 0;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

  
num1 = atol(argv[1]);
num2 = atol(argv[2]);

while (i < argc)
{
if (num1 > 57 || num2 < 48)
{
printf("Error\n");
exit(98);
}
i++;
}

  result = num1 * num2;
  
printf("%lu\n", result);

return (0);
}
