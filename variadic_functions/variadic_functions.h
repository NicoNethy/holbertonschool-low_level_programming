#ifndef _variadic_functions_
#define _variadic_functions_

#include<stdio.h>
#include<stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);	
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char);
int printInt(int b);
int printChar(int b);
int printFloat(double b);
int printString(char *b);

#endif
