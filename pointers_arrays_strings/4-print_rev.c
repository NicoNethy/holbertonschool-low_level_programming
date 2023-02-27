#include "main.h"

/**
 *print_rev - the function
 *@s: the string
 */

void print_rev(char *s)

{

	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	for (i = i - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}

	_putchar(10);
}
