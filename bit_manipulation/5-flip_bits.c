#include "main.h"

/**
 * flip_bits - flip bits
 * @n: int
 * @m: another int
 * Return: allways
 */
	unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0, con = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		if (flips & 1)
			con++;

		flips = flips >> 1;
	}
	return (con);
}
