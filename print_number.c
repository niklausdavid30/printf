#include <main.h>

/**
* print_integer - Prints integers
* @argms: Variadic list of arguments
* Return: Number of printed chars
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

/**
* print_octal - Prints octal of unsigned num
* @argms: Variadic list of arguments
* Return: Number of printed chars
*/

int print_octal(va_list argms)
{
    unsigned int num = va_arg(argms, unsigned int);
    int printed_chars = 0;

    if (num == 0) {
        _putchar('0');
        printed_chars++;
    } else {
        char octal[32];
        int i = 0;

        while (num) {
            octal[i] = '0' + (num & 7); 
            i++;
            num >>= 3; 
        }

        while (i > 0) {
            i--;
            _putchar(octal[i]);
            printed_chars++;
        }
    }

    return (printed_chars);
}

/**
* print_hexLower - Prints hexadecimal in Lowercase of unsigned num
* @argms: Variadic list of arguments
* Return: Number of printed chars
*/

int print_hexLower(va_list argms)
{
	unsigned int number = va_arg(argms, unsigned int);
	char buffer[32];
	int index = 0, digits = 0, i, remainder;
	if (number == 0)
		return (_putchar('0'));
	while (number > 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			buffer[index] = '0' + remainder;
		else
			buffer[index] = 'a' + (remainder - 10);
		number /= 16;
		index++;
		digits++;
	}
	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);
	return (digits);
}

/**
* print_hexUpper - Prints hexadecimal in Uppercase of unsigned num
* @argms: Variadic list of arguments
* Return: Number of printed chars
*/

int print_hexUpper(va_list argms)
{
	unsigned int number = va_arg(argms, unsigned int);
	char buffer[32];
	int index = 0, digits = 0, i, remainder;
	if (number == 0)
		return (_putchar('0'));
	while (number > 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			buffer[index] = '0' + remainder;
		else
			buffer[index] = 'A' + (remainder - 10);
		number /= 16;
		index++;
		digits++;
	}
	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);
	return (digits);
}
