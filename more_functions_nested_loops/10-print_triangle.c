#include "main.h"

/**
 *print_triangle - the function
 *@size: size of the triangle
 */


void print_triangle(int size)
{
	int l;
	int s;
	int e;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (e = size - s; e > 0; e--)
			{
				_putchar(' ');
			}	
			for (l = 0; l <= s; l++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
