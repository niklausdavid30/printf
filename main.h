#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/* Structures */
/**
* struct functions - print function structure.
* @specifier: Char indicating specifier to use.
* @pf: Function that will handle the printing.
*/

typedef struct functions
{
	char specifier;
	int (*pf)(va_list argms);
} PrintFunction;

/* Main Function */
int _printf(const char *format, ...);
int parser(const char *format, PrintFunction printFunctions[], va_list argms);
int print_char(va_list argms);


/* Help Functions */
int _putchar(char c);


#endif /* MAIN_H */
