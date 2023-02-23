#include "main.h"
/**
 *print_diagonal - the function
 *@n: the int
 */

void print_diagonal(int n)

{
	int c;
	int b;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (b = 1; b <= c; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
