#include "main.h"
/**
 * jack_bauer - prints the hours and the minutes
 */

void jack_bauer(void)

{
	int hor;
	int min;

	for (hor = 0; hor < 24; hor++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hor / 10) + '0');
			_putchar((hor % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
