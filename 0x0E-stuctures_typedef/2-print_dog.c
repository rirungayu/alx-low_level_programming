#include <stdio.h>
#include "dog.h"

/**
* print_dog - function to print dog
* @d: struct of type dog
* Return: void
*/

void print_dog(struct dog *d)
{
printf("Name: %s\n Age: %f\n Owner: %s\n", d -> name, d -> age, d -> owner);
}
