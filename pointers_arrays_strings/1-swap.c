#include "main.h"

/**
 *swap_int - the function
 *@a: the ant
 *@b: the ints
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
