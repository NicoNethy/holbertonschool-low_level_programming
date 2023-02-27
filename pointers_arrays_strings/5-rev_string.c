#include "main.h"

/**
 * rev_string - the function
 * @s: the string
 */

void rev_string(char *s)

{
	int i;
	int n;
	char c[1000];

	n = 0;

	for (i = 0; s[i]; i++)
	{
		;
	}
	for (i = i - 1; s[i]; i--)
	{
		c[n] = s[i];
		n++;
	}
	for (i = 0; s[i]; i++)
	{
		s[i] = c[i];
	}
}
