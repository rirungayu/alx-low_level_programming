#include "dog.h"

/**
* new_dog - creates a dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t new_dog;
new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);
}
