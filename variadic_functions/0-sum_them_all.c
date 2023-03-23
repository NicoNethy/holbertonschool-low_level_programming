#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - the function
 *@n: the quantity of numbers
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list coca;
	unsigned int a;
	int b;

	va_start(coca, n);

	if (n == 0)
	{
		return (0);
	}

	b = 0;
	for (a = 0; a < n; a++)
	{
		b += va_arg(coca, int);
	}
	va_end(coca);
	return (b);
}
