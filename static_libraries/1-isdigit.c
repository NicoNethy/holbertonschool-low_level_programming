#include "main.h"

/**
 * _isdigit - a function that checks for numeric character
 * @c: single letter input
 * Return: 1 if int c is a number, 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
