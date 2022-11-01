#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a aname
* @name: name to print
* @f: functon that prints name
* Return: zero
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
