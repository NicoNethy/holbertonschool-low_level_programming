#include "main.h"

/**
 *_strcmp - func
 *@s1: the first string
 *@s2: the second string
 *Return: s1 minus the s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] - s2[a] == 0 && s1[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
