#include <stdio.h>
#include "dog.h"

/**
* print_dog - function to print dog
* @d: struct of type dog
* Return: void
*/

void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d -> name, d -> age, d -> owner);
}
