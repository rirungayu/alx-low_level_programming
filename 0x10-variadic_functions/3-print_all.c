#include "variadic_unctions.h"

/**
* print_all - prints all kinds of arguments
* 
* Return: void
*/

void print_all(const char * const format, ...)
{
unsigned int i = 0;
va_list ap;
char separator = " ";

va_start(ap, format);

while (format && format[i] != '\0')
{
printf("%s", str ? str : "(nil)");
i++;
}

va_end(ap);

printf("\n");
}
