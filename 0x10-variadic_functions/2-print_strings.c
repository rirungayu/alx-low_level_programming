#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: separates arguments
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;
char *str;

va_start(ap, n);

while (i < n - 1 && n != 0)
{
str = va_arg(ap, char *);
if (separator != NULL)
printf("%s%s", str ? str : "(nil)", separator);
else
printf("%s", str ? str : "(nil)");
i++;
}

va_end(ap);

str = va_arg(ap, char *);
if (n)
printf("%s\n", str ? str : "(nil)");
else
printf("\n");
}


