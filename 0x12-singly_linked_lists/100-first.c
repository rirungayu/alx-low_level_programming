#include <stdio.h>

/**
* execBefore - executes before main function
* Return: nothing
*/

void __attribute__ ((constructor)) execBefore(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
