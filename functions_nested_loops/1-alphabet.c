#include "main.h"
/**
 * main - start
 * void print_alphabet(void) - the function
 * Return: allways
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
