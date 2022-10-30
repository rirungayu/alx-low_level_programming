#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - multiplies two numvers
* @argc: no of arguments
* @argv: array of arguments
*/

int main(int argc, char *argv[])
{
int num1;
int num2;
unsigned long result;
int i;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

  
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

while (i < argc)
{
if (num1 > 57 || num2 < 48)
{
printf("Error");
exit(98);
}
i++;
}

  result = num1 * num2;
  
printf("%lu\n", result);

return (result);
}
