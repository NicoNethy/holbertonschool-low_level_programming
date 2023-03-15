#include "main.h"
#include "2-strlen.c"
/**
 *cap_string - the function
 *@s: the string
 *Return:the string
 */

char *cap_string(char *s)
{
	int a;
	int c;
	int b = 1;
	char sp[] = {32, 9, 10, 44, 59, 34, 40, 41, 123, 125, 46, 33, 63};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z' && b == 1)
		{
			s[a] -= 32;
		}
		b = 0;
		for (c = 0; sp[c]; c++)
		{
			if (s[a] == sp[c])
			{
				b = 1;
			}
		}
	}
	return (s);
}
