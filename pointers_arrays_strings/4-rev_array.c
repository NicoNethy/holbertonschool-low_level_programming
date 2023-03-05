#include "main.h"

/**
 *reverse_array - the function
 *@a: the array
 *@n: the number
 */

void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (x = 0; x < n / 2; x++)
	{
		b = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = b;
	}
}
