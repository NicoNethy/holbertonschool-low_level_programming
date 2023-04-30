#include "lists.h"

/**
 * free_dlistint - the function to free
 * @head: the list to fre
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
