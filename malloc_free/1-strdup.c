#include "main.h"

/**
 *_strdup - the function
 *@str: la string
 *Return: coca
 */

char *_strdup(char *str)
{
	int a;
	char *coca;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
       	coca = malloc(sizeof(char) * a + 1);

	if (coca == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		coca[a] = str[a];
	}
	return (coca);
}
