#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	int cont = 0;
	int cont2 = 0;

	while (s[cont])
	{
		while (accept[cont2])
		{
			if (s[cont] == accept[cont2])
				return (s + cont);

			cont2++;
		}
		cont2 = 0;
		cont++;
	}
	while (accept[cont2])
	{
		if (s[cont] == accept[cont2])
			return (s + cont);
		cont2++;
	}
	return (0);
}
