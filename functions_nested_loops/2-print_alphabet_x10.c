#include "main.h"
/**
 *
 *print_alphabet_x10 - the function
 */

void print_alphabet_x10(void)
{
	char A = 'a';
	int c = 48;

	if(c <= 57)
	{
		while (A <= 'z')
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
		c++;
	}

}

