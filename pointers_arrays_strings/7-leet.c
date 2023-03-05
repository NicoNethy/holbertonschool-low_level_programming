#include "main.h"

/**
 *leet - a function lit
 *@a: its the a
 *Return: return the result
 */

char *leet(char *a)
{
	char x[] = "AEOTL";
	char n[] = "43071";
	int u = 0;
        int z = 0;

	while (a[i])
	{
		z = 0;
		while (z < 5)
		{
			if (a[u] == x[z] || a[u] - 32 == x[z])
			{
				a[u] = n[z];
			}
			z++;
		}
		u++;
	}
	return (a);
}
