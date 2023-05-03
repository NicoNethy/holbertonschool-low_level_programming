#include "main.h"

/**
 * main - multiplicator
 * @argc: argc
 * @argv: argv
 * Return: allways
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
