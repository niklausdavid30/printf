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

/**
* print_unsigned - Prints unsigned integers
* @argms: Variadic list of arguments
* Return: Number of printed chars
*/

int print_unsigned(va_list argms)
{
	int n;

	n = print_unsigned_number(argms, unsigned int);
	return (n);
}

/**
* print_binary - Prints binary of unsigned num
* @argms: Variadic list of arguments
* Return: Number of printed chars
*/

int print_binary(va_list argms)
{
	int flag = 0, length = 0;
	unsigned int i, number, mask = 1;

	number = va_arg(argms, unsigned int);
	mask <<= (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (mask & number)
		{
			length += _putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == sizeof(unsigned int) * 8 - 1)
				length += _putchar(0 + '0');
		}
		mask >>= 1;
	}
	return (length);
}
