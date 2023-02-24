#include "main.h"

/**
 *print_square - the function name
 *@size: is the size of the square
 */

void print_square(int size)
{
	int l;
	int s;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
