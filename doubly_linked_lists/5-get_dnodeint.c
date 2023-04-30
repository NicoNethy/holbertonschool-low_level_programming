#include "lists.h"

/**
 * get_dnodeint_at_index - the function
 * @head : what s receied
 * @index: inx
 * Return: the value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; head != NULL && n < index; n++)
		head = head->next;

	if (n != index)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
}
