#include "main.h"
/**
 * main - start
 * print_alphabet - the function
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
