#include "lists.h"

/**
 * add_node_end - function
 * @head: the head
 * @str: the value again
 * Return: the return
 */

list_t *add_node_end(list_t **head, const char *str)

{
	int i = 0;
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;

	if (*head == NULL)
	{
		*head = new;
		return (*head);			
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;	return (temp->next);
}
