#include "main.h"

/**
 * _calloc - calloc
 * @nmemb: the things
 * @size: the size
 * Return: allways allways
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int coca;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	for (coca = 0; coca < (nmemb * size); coca++)
	{
		c[coca] = 0;
	}
	return (c);
}
