#include "main.h"

/**
 * _strcat - the function as always
 *@dest: the destiny
 *@src: the source of all
 *Return: the dest string
 */

char *_strcat(char *dest, char *src)

{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
