#include "lists.h"

/**
 * add_dnodeint - function
 * @head: da list
 * @n: the int
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
