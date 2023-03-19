#include "main.h"

/**
 * malloc_checked - function checker
 * @b: the int
 * Return: allways
 */

void *malloc_checked(unsigned int b)

{
	void *a;

	a = malloc(b);

	if (!a)
	{
		exit(98);
	}
	return (a);
}
