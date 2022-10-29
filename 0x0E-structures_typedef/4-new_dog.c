#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *namecp;
char *ownercp;
unsigned int namelen = 0;
unsigned int ownerlen = 0;

new_dog = malloc(sizeof(dog_t));
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
if (new_dog == NULL)
return (NULL);

while (name)
namelen++;
while (owner)
owner++;

name_cp = malloc(sizeof(char) * namelen);
owner_cp = malloc(sizeof(char) * ownerlen);
_strcpy(namecp, name);
_strcpy(ownercp, owner);

return (new_dog);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
