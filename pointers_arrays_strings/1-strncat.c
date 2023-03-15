#include "main.h"

/**
 *_strncat - the function
 *@dest: destiny once again
 *@src source string
 *@n: number
 *Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < n && src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
