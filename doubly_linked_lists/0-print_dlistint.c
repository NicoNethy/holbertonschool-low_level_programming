#include "lists.h"

/**
 * print_dlistint - prints the elements
 * @h: list
 * Return: allways
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->n)
			printf("%i", h->n);
		else
			printf("%i", 0);
		printf("\n");
		h = h->next;
		j++;
	}
	return (j);
}
