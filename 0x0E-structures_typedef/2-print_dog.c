#include "main.h"

/**
* print_dog - prints the dog object
* @d: the object
*/

void print_dog(struct dog *d)
{
if (d)
printf("Name: %s\nAge: %.1f\nOwner: %s", d->name, d->age, d->owner);
}
