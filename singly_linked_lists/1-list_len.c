#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list.
 *@h: h
 *Return: return con
 */

size_t list_len(const list_t *h)

{
	int con;

	for (con = 0; h != NULL; con++)
	{
		h = h->next;
	}
	return (con);
}
