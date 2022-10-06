#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - starting point
 * Pointer *p that points to int n
 * @n: is the int that gets pointed
 * Return: Nothing
 */

void reset_to_98(int *n)

{
	int *p;

	p = &*n;
	*p = 98;

}

