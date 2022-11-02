#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int bytes;
int i = 0;
int (*prog)(int, char **) = &main;

if (argc != 2)
{
printf("Error");
exit (1);
}

  
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error");
exit (2);
}

while (i < bytes)
{
printf("%02x%c", (unsigned char)*((char *)prog + i), i < n_bytes - 1 ? ' ' : '\n');
i++;
}


return (0);
}
