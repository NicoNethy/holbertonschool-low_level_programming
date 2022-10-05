#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - Entry point
 * _putchar
 * Return: void
 */

void print_numbers(void)

{
	char n;

	for (n = '0'; n <= '9'; n++)
		{
		_putchar(n);
		}
	putchar('\n');
}
