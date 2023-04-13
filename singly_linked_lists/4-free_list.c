#include "lists.h"

/**
 * free_list - func
 * @head: the head once again
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		free_list(head->next);
		free(head);
	}
}
