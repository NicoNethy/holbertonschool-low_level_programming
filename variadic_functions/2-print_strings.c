#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_strings - the function
 * @separator: the separating char
 * @n: the number of strings given
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list coca;
	unsigned int a;
	char *b;

	va_start(coca, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(coca, char *);
		if (b != NULL)
		{
			printf("%s", b);
		}
		else
		{
			printf("(nil)");
		}


		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(coca);
	printf("\n");
}
