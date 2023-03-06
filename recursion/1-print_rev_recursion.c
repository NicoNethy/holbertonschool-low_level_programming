#include "main.h"
/**
 *_print_rev_recursion - the function
 *@s: the string once again
 *Return: voide
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
