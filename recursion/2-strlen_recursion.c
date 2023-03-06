#include "main.h"

/**
 * _strlen_recursion - the function
 * @s: the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
