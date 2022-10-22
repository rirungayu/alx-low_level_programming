#include "main.h"

/**
* _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
* @n: number of bytes
* @s: memory area
* @b: constant
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i = 0;
  
  while (i < n)
  {
    *(s + i) = b;
    i++;
  }
  return (s);
}
