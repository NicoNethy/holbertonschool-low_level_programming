#include "main.h"

/**
 *_puts - the function
 *@str: the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
