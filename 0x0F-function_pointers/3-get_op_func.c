#include "function_pointers.h"

/**
* get_op_funct - gets the needed operator
* @s: the operator
* @int: the function
* Return: pointer to the selected function
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
  
while (ops)
{
if (ops[i].op == s)
return (ops[i].f);
i++;
}
  
return NULL;
}
