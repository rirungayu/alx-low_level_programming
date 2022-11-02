#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: separates arguments
* @n: number of integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;

if (n != 0)
{ 
va_start(ap, n);

while (i < n)
{
if (separator != NULL)
printf("%d%s", va_arg(ap, int), separator);
else
printf("%d", va_arg(ap, int));
i++;
}
printf("\n");

va_end(ap);   
}

}
