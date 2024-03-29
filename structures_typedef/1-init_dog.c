#include "dog.h"

/**
 *init_dog - the function that initiates the dog
 *@d: the pointer of the dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
