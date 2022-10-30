#include <stdio.h>
#include "main.h"

/**
* main - multiplies two numvers
* @argc: no of arguments
* @argv: array of arguments
*/

void main(int argc, char *argv[])
{
int num1;
int num2;
long result;
int i;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

while (i < argc)
{
if (argv[i] > 57 || argv[i] < 48)
{
printf("Error");
exit(98);
}
i++;
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%l\n", (num1 * num2));

return (result);
}
