#include "function_pointers.h"

/**
* op_add - gets sum of two numbers
* op_sub - gets difference of two numbers
* op_mul - gets product of two numbers
* op_div - gets dividend of two numbers
* op_mod - gets remainderof dividion
* @a:first number
* @b: second number
* Return:allreturn result
*/

int op_add(int a, int b)
{
return (a + b);
}

int op_sub(int a, int b)
{
return (a - b);
}

int op_mul(int a, int b)
{
return (a * b);
}

int op_div(int a, int b)
{
return (a / b);
}

int op_mod(int a, int b)
{
return (a % b);
}
