#include "main.h"

/**
 *
 *
 *
 */

void more_numbers(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		for(i = 0; i <= 14; i++)
		{
			if(i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(n);
	}
	_putchar(10);
}
