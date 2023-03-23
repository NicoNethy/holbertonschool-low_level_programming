#include<stdlib.h>
#include "dog.h"
#include<string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *pi = malloc(sizeof(dog_t));

	if (pi == NULL)
		return (NULL);

	pi->name = malloc(strlen(name) * sizeof(char) + 1);
	pi->owner = malloc(strlen(owner) * sizeof(char) + 1);

	if (pi->name == NULL)
	{
		free(pi);
		return (NULL);
	}

	if (pi->owner == NULL)
	{
		free(pi);
		free(pi->name);
		return (NULL);
	}

	strcpy(pi->name, name);
	strcpy(pi->owner, owner);
	pi->age = age;
	return (pi);
}
