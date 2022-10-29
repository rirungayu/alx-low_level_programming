#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints the dog object
* @d: the object
*/

void print_dog(struct dog *d)
{
if (d)
printf("Name: %s\nAge: %.1f\nOwner: %s", d->name ? d->name : "(nil)", d->age ? d->age "(nil)", d->owner ? d->owner : "(nil)");
}
