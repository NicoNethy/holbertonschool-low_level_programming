#include "main.h"

/**
 * print_numbers - the function
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if ((n == 50) || (n == 52))
		{
			n++;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar(10);
}
