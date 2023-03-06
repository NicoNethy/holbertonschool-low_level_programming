#include "main.h"

/**
 *_sqrt_recursion - the function
 *@n: the number
 *Return:
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_result(n, 0));
}

/**
 *_sqrt_result - the function
 *@a: an int
 *@b: an int again
 *Return: the result once again
 */

int _sqrt_result(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_result(a, b + 1));
}
