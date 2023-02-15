#include "main.h"
/**
 * _isalpha - the function
 * @c: is the int
 * Return: allways
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	return (0);
}
