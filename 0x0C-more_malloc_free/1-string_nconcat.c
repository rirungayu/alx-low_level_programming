#include <stdlib.h>
#include "main.h"

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
int s1len = 0;
int s2len = 0;
int i = 0;
char *ar;

ar = malloc(sizeof(char) * (s1len + s2len));

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (
return (ar);
}
