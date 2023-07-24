#include <main.h>

/**
 * _printf - Custom "printf" function
 * @format: Given format string
 * Return: Number of printed chars or -1 if NULL
*/

int _printf(const char *format, ...)
{
	int length;
	va_list argms;

	FunctionList printFunctions[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'d', print_integer}, {'i', print_integer}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexLower},
		{'X', print_hexUpper}
	};

	if (format == NULL)
		return (-1);

	va_start(argms, format);

	length = parser(format, printFunctions, argms);
	va_end(argms);

	return (length);

}
