#include "main.h"
/**
 *
 *print_alphabet_x10 - the function
 */

void print_alphabet_x10(void)
{
	char A;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (A = 97; A <= 122; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}

