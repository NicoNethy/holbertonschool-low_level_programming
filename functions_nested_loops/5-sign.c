#include "main.h"
/**
* _islower - a function that checks for lowercase character
* @c: single letter input
* Return: 1 if int c is lowercase, 0 if otherwise
*/

int print_sign(int n)

{
	if (n > 0) {
		putchar('+');
			return (1);
	}
	else if (n == 0) {
		putchar(0);
			return (0);
	}
	else
		putchar('-');
			return (-1);
}
