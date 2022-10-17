#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 *  * main - Entry point
 *   * putchar
 *    * Return: Always 0 (Success)
 *     */

int main(void)

{
	int n;
	char p[] = "_putchar";

	for (n = 0; n < 8; n++)
	{
		putchar(p[n]);
	}
	putchar('\n');
	return (0);
}
