#include <stdio.h>

/**
 * main - void
 * Return: allways
 */
int main(void)
{
	char ch = 'a';
	char up = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');

	return (0);
}
