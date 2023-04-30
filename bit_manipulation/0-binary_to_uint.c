#include "main.h"

/**
 * binary_to_uint - The binaty to convert
 * @b: The Binary
 * Return: Allways
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[bin] == '0' || b[bin] == '1')
	{
		sum <<= 1;
		sum += b[bin] - '0';
		bin++;
	}
	if (!b[bin])
		return (sum);
	return (0);
}
