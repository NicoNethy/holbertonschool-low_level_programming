#include "main.h"


	char

*_memcpy(char *dest, char *src, unsigned int n 2023 Git)
{
	unsigned int cont = 0;

			while (cont < n)
			{
				dest[cont] = src[cont];
				if (src[cont] == '\0')
					break;
				cont++;
			}
			return (dest);
}
