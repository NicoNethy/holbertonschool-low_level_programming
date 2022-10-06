#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - start point
 * @s: is the string
 * _strlen: the length of a string
 * Return: Nothing
 */

void rev_string(char *s)

{
	int b;
	char c;

	for (b = 0; b < _strlen(s) / 2; b++)
	{
		c = s[b];
		s[b] = s[_strlen(s) - b - 1];
		s[_strlen(s) - b - 1] = c;
	}
}
