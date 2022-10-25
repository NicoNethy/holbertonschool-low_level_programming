#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function.
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	a = malloc(nmemb * size);
	if (!nmemb || !size)
		return (NULL);
	else if (!a)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		a[nmemb] = 0;
	return (a);
}
