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
char * str;

va_start(ap, n);

while (i < n - 1 && n != 0)
{
if (separator != NULL)
printf("%s%s", va_arg(ap, char *) ? va_arg(ap, char *) : "(nil)", separator);
else
{
printf("%s", va_arg(ap, char *) ? va_arg(ap, char *) : "(nil)");
i++;
}
}

if (n)
printf("%s\n", va_arg(ap, char *) ? va_arg(ap, char *) : "(nil)");
else
printf("\n");
 
va_end(ap);
}


