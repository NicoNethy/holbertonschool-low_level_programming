#include "main.h"

/**
 *print_last_digit - coca
 *@i: the thing
 *Return: the value
 */

int print_last_digit(int i)
{
	int res = i % 10;
	int otr;

	if (res < 0)
	{
		res = -res;
	}
	_putchar(otr = '0' + res);
	return (res);
}
