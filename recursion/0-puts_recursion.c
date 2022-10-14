#include "main.h"
/**
 *_puts_recursion - puts with recursion
 *@s: pointer
 *Return: nanai
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
