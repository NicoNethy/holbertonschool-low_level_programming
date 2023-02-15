#include <stdio.h>

/**
 * main - void
 * Return: allways
 */
int main(void)
{
	char A = 'a';

	while (A <= 'z' && A != 'q' && A != 'e')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
