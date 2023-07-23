#include <main.h>

/**
* print_integer - Prints integers
* @argms: Variadic list of arguments
*/

int print_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);

}

int print_unsigned(va_list args)
{
	int n;

	n = print_unsigned_number(args);
	return (n);
}
