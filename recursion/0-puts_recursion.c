#include "main.h"

/**
 *_puts_recursion - the function
 *@s: the stirng
 *Return: allways
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
