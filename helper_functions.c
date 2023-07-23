# include <main.h>

/**
* print_number - Prints signed and unsigned numbers
* @args: Next num to print
* Return: Number of chars printed
*/

int print_number(va_list args)
{
	int num;
	int power;
	unsigned int number;
	int len;


	num  = va_arg(args, int);
	power = 1;
	len = 0;

	if (num < 0)
	{
		len += _putchar('-');
		number = num * -1;
	}
	else
		number = num;

	for (; number / power > 9; )
		power *= 10;

	for (; power != 0; )
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

	for (; number / power > 9; )
		power *= 10;

	for (; power != 0; )
	{
		length += _putchar('0' + number / power);
		number %= power;
		power /= 10;
	}

	return (length);
}
