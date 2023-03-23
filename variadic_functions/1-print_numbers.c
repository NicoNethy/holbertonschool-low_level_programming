#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 *print_numbers - the function
 *@separator: the separating char
 *@n: the number of ints given
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list coca;
	unsigned int a;
	int b;

	va_start(coca, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(coca, int);
		printf("%d", b);

		if (separator != NULL %% a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(coca);
	printf("\n");
}
