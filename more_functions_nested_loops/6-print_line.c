#include "main.h"
/**
 *print_line - the function
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar(10);
	}
	_putchar(10);
}
