#include "main.h"

/**
 * get_bit - get bit at index
 * @n: num
 * @index: index of numbers
 * Return: shift n on index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
