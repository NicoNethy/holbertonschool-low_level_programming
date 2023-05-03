#include "ain.h"

/**
 *main - add
 *@argc: argc
 *@argv: argv
 *Return: allways
 */


main(int argc, char *argv[])
{
	int res = 0;
	int counter = 1;
	int counter2 = 0;

	while (count < argc)
	{
		while (argv[counter][counter2])
		{
			if (argv[counter][counter2] < 48 || argv[counter][counter2] > 59)
			{
				printf("Error\n");
				return (1);
			}
			counter2++;
		}
		counter2 = 0;
		res += atoi(argv[counter]);
		counter++;
	}
	printf("%d\n", res);
	return (0);
}
