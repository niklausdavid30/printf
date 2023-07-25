#include "main.h"

/**
* print_number - Prints signed and unsigned numbers
* @argms: Next num to print
* Return: Number of chars printed
*/

int print_number(va_list argms)
{
	int num;
	int power;
	unsigned int number;
	int len;

	num = va_arg(argms, int);
	power = 1;
	len = 0;

	if (num < 0)
	{
		len += _putchar('-');
		number = num * -1;
	}
	else
		number = num;

	for (; number / power > 9;)
		power *= 10;

	for (; power != 0;)
	{
		len += _putchar('0' + number / power);
		number %= power;
		power /= 10;
	}

	return (len);
}

/**
* print_unsigned_number - Prints unsigned number
* @num: Number to print
* Return: Number of printed chars
*/

int print_unsigned_number(unsigned int num)
{
	int power;
	int length;
	unsigned int number;

	power = 1;
	length = 0;

	number = num;

	for (; number / power > 9;)
		power *= 10;

	for (; power != 0;)
	{
		length += _putchar('0' + number / power);
		number %= power;
		power /= 10;
	}

	return (length);
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strlen - Calculate the length of a string
* @str: Pointer to string
* Return: The length of the string
*/

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
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
