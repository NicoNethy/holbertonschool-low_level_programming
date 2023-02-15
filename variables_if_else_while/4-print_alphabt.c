#include <stdio.h>

/**
 * main - void
 * Return: allways
 */
int main(void)
{
	char A;
	
	for (A = 'a'; A <= 'z'; A++)
	{
		if (A == 'e' || A == 'q')
		{
		A++;
		}
		putchar(A);
	}

	putchar('\n');

	return (0);
}
