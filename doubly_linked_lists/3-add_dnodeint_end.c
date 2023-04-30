#include "lists.h"

/**
 * add_dnodeint_end - the function
 * @head: the list again
 * @n: the value of the int
 * Return: allways
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t)), *new = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		while (new != NULL)
		{
			if (new->next == NULL)
			{
				temp->n = n;
				temp->prev = new;
				temp->next = NULL;
				new->next = temp;
				break;
			}
			new = new->next;
		}
	}
	return (*head);
}
