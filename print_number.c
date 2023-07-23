#include <main.h>

/**
* print_integer - Prints integers
* @argms: Variadic list of arguments
*/

int print_integer(va_list argms)
{
	int n;

	n = print_number(argms);
	return (n);

}

int print_unsigned(va_list argms)
{
	int n;

	n = print_unsigned_number(argms, unsigned int);
	return (n);
}
