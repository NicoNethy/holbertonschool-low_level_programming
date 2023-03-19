#include "main.h"

/**
 * array_range - the function Ranger
 * @min: minimun
 * @max: maximum
 * Return: allways
 */

int *array_range(int min, int max)

{
	int a = 0;
	int *ab;

	if (min > max)
	{
		return (NULL);
	}
	ab = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (ab == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ab[a] = min;
		a++;
		min++;
	}
	return (ab);

}
