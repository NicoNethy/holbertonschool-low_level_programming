#include "main.h"

/**
 *_pow_recursion - the func
 *@x: an int
 *@y: the other int
 *Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);

}
