#include "main.h"

/**
 * _divide - divide int
 * @n: long int
 */

void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');

}
/**
 * print_binary - print the binary
 * @n : int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_divide(n);
}
