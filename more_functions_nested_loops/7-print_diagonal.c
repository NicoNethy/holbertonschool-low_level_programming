#include "main.h"
/**
 *print_diagonal - the function
 *@n: the int
 */

void print_diagonal(int n)

{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			_putchar(92);
		}
	}
	_putchar(10);
}
