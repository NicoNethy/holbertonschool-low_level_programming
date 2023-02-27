#include "main.h"

/**
 *_puts - the function
 *@str: the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar(10);
}
