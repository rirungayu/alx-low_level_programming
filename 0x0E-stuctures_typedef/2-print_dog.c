#include "dog.h"

/**
* print_dog - function to print dog
* @d: struct of type dog
* Return: void
*/

void print_dog(struct dog *d)
{
printf("Name: %s\n Age: %.1f\n Owner: %s", d.name, d.age, d.owner);
}
