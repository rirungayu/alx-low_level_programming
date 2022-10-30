#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatentates two strings
* @s1: first string
* @s2: second string
* @n: bytes of s2 to be added
* Return: new concatenated string
* NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1len = 0;
unsigned int s2len = 0;
unsigned int i;
unsigned int j;
char *ar;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1len])
s1len++;

while (s2[s2len])
s2len++;
  
if (n < s2len)
s2len = n;

ar = malloc(sizeof(char) * (s1len + s2len + 1));

if (ar == NULL)
return (NULL);

for (i = 0; i < s1len; i++)
ar[i] = s1[i]

for (j = 0; j < s2len; j++)
{
ar[i] = s2[j];
i++;
}

ar[i] = '\0';

return (ar);
}
