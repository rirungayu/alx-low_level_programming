#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: number of args
* @argv: arra of args
* Return: zero
*/

int main(int argc, char *argv[])
{
int bytes;
int i = 0;
int (*prog)(int, char **) = &main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

else
{
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

while (i < bytes)
{
printf("%02x%c", (unsigned char)*((char *)prog + i),
i < bytes - 1 ? ' ' : '\n');
i++;
}
}

return (0);
}
