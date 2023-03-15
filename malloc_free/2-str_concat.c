#include "main.h"

/**
 *str_concat - the function
 *@s1: la string uno
 *@s2: la string dos
 *Return: coca
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	char *coca;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	}

	if (s2 != NULL)
	{
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}
	}

	coca = malloc(sizeof(char) * (a + b) + 1);

	if (coca == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
	for (a = 0; s1[a] != '\0'; a++)
	{
		coca[a] = s1[a];
	}
	}
	if (s2 != NULL)
	{
	for (b = 0; s2[b] != '\0'; b++, a++)
	{
		coca[a] = s2[b];
	}
	}
	return (coca);
}
