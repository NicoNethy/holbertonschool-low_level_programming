#include "main.h"

/**
 *main - the function
 *@argc: the arguments
 *@argv: the string
 *Return: zero
 */

int main(int argc, char *argv[])
{
	int a;

	(void) argc;
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
