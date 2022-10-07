#include "main.h"
#include "2-strlen.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)

{
	int half;
	int iensure = 0;

	if (_strlen(str) % 2 != 0)
	{
		iensure += 1;
	}
	for (half = (_strlen(str) + iensure) / 2; half < _strlen(str); half++)
	{
		putchar(str[half]);
	}
	putchar('\n');
}
