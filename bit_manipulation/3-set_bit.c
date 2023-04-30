#include "main.h"

/**
 * set_bit - Func to set it
 * @n: int
 * @index: the index
 * Return: allways
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
