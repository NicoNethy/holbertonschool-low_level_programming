#include "3-calc.h"

/**
 * main - the main function
 * @argc: cantidad
 * @argv: contenido
 * Return: zero as allways if good
 */

int main(int argc, char *argv[])

{
	int (*oper)(int, int);

	if (argc == 4)
	{
		oper = get_op_func(argv[2]);
		printf("%d\n", oper(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
