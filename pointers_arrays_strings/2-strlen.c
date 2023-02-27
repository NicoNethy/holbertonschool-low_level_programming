#include "main.h"

/**
 *_strlen: the function
 *@s: the string
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	return (i);
}
