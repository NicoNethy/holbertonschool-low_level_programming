#include "main.h"
/**
 * print_alphabet - the function
 */

void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A++;
	}
	_putchar('\n');
}
