#include "main.h"

/**
 *create_array - the assingment
 *@size: size of this
 *@c: the char
 *Return: something
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
