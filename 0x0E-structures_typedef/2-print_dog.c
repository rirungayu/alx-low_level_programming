#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints the dog object
* @d: the object
*/

void print_dog(struct dog *d)
{
if (d)
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)", d->age, d->owner ? d->owner : "(nil)");
}
