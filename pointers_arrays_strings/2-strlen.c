#include "main.h"

/**
 *_strlen - the function
 *@s: the string
 *Return: the value of int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
