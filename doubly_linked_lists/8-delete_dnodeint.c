#include "lists.h"

/**
 * delete_dnodeint_at_index - index
 * @head: head
 * @index: index
 * Return: return
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int mix;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}

	temp = *head;
	for (mix = 0; temp->next && mix != index; mix++)
		temp = temp->next;

	if (mix != index)
	{
		return (-1);
	}
	else
	{
		if (temp->next != NULL)
		{temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp); }
		else
		{temp->prev->next = NULL;
			free(temp); }
		return (1);
	}
	return (-1);
}
