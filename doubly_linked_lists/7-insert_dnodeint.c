#include "lists.h"

/**
 * insert_dnodeint_at_index - Function number 7
 * @h: cabeza
 * @idx: inx
 * @n: int
 * Return: allways
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos;
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *h;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (pos = 1; temp->next != NULL && pos != idx; pos++)
		temp = temp->next;

	if (pos == idx)
	{
		new->next = temp;
		new->prev = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
