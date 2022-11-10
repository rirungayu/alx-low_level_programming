#include <Stdio.h>

/**
* execBefore - executes before main function
* @constructor: makes it executed before main
* Return: nothing
*/

void execBefore (void) __attribute__ ((constructor))
{
printf("You're beat! and yet, you must allow,"
       "\nI bore my house upon my back!\n");
}
