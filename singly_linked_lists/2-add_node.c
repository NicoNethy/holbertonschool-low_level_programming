#include "lists.h"

/**
 * add_node - function
 * @head: the list
 * @str: str value
 * Return: allways
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
