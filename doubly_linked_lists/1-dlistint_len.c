#include "lists.h"

/**
 * dlistint_len - function
 * @h: da list
 * Return: the allways
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
