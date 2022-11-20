#include "main.h"

/**
 * flip_bits - pankake
 * @n: ene
 * @m: eme
 * Return: gods work
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned int nbits;

		for (nbits = 0; n || m; n >>= 1, m >>= 1)
		{
			if ((n & 1) != (m & 1))
				nbits++;
		}

		return (nbits);
}
