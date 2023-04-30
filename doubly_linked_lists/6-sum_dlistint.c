#include "lists.h"

/**
 * sum_dlistint - the list function
 * @head: the head
 * Return: allways
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
