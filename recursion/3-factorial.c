#include "main.h"

/**
 * factorial - the start
 * @n: the integer
 * Return: two things
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial (n - 1));
}
