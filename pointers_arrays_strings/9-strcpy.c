#include "main.h"

/**
 *_strcpy - bababooey
 *@dest: destinatrion
 *@stc: sorce
 *Return: allways
 */

char *_strcpy(char *dest, char *src)


{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
