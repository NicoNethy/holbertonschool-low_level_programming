#include "main.h"

/**
 *print_array - the function
 *
 */

void print_array(int *a, int n)

{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar(10);
}
