#include <stdio.h>
/**
 * main - start
 * Return: allways
 */

int main(void)
{
	int a;
	char c = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
