#include "main.h"
/**
 *factorial - the function
 *@n: the number
 *Return: a lot of things
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
