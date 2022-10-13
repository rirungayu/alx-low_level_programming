#include "main.h"

/**
* rev_string - reverses a astring
* @: the string
* Return: nothing
*/

void rev_string(char *s)
{
int i = 0;
int j;
int slen;
char copy [600];

while (s[i] != '\0')
{
i++;
}

slen = i;

for (j = 0; j < slen; j++)
{
copy[j] = s[i - 1];
i--;
}

copy[slen] = '\0';

for (j = 0; j < slen; j++)
{
s[j] = copy[j];
}
}
