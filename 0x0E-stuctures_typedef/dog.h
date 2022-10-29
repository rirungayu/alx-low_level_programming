#ifndef HEADER_FILE
#define HEADER_FILE

/**
* struct dog - dog struct
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: a structure defining a dog
*/

struct dog
{
char *name;
float age;
char *owner; 
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


typedef struct dog dog_t;

#endif
