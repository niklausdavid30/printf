#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/* Structures */
/**
* struct functions - structure for print functions.
* @specifier: Char indicating specifier to use.
* @pf: Corresponding print function.
*/

typedef struct functions
{
	char specifier;
	int (*pf)(va_list argms);
} FunctionList;

/* Main Functions */
int _printf(const char *format, ...);
int parser(const char *format, FunctionList printFunctions[], va_list argms);
int print_char(va_list argms);
int print_string(va_list argms);
int print_percent(va_list argms);
int print_integer(va_list argms);
int print_unsigned(va_list argms);
int print_binary(va_list argms);
int print_octal(va_list argms);
int print_hexLower(va_list argms);
int print_hexUpper(va_list argms);



/* Helper Functions */
int _putchar(char c);
int print_number(va_list argms);
int print_unsigned_number(unsigned int num);

#endif /* MAIN_H */
