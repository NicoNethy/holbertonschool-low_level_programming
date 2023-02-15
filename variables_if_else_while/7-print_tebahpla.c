#include <stdio.h>

/**
 * main - void
 * Return: allways
 */
int main(void)
{
	char A = 'z';

	while (A >= 'a')
	{
		putchar(A);
		A--;
	}
	putchar('\n');

	return (0);
}
