#include "main.h"

/**
 *puts_half - the function
 *@i: an int
 *@m: an int
 */

void puts_half(char *str)
{
	int i = 0;
	int m = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		m = (i + 1) / 2;
	}
	else
	{
		m = i / 2;
	}
	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
	_putchar(10);
}
