#include "main.h"

/**
 * swap_int - Start point
 * @a: integer one
 * @b: integer two to swap
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
