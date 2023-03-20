#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initiatises a dog structure
 *@d: a dog structure
 *@name: a dog's name
 *@age: a dog's age
 *@owner: The owner of the dog
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = anme;
		d->age = age;
		d->owner = owner;
	}
}
