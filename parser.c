#include "main.h"

/**
* parser - Goes through and prints format string
* @format: String to be parsed through
* @printFunctions: Struct of type FunctionList of print functions
* @argms: Variadic list of args
* Return: Number of printed chars or -1 if failure
*/

int parser(const char *format, FunctionList printFunctions[], va_list argms)
{
	int i = 0, j, length = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i] != '\0')
		{
			int specifier_check = 0;

			for (j = 0; j < 10; j++)
			{
				if (format[i + 1] == printFunctions[j].specifier)
				{
					specifier_check = 1;
					length += printFunctions[j].pf(argms);
					i++;
					break;
				}
			}
			if (!specifier_check)
			{
				length += _putchar('%');
				i++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			length += _putchar('%');
			i++;
		}
		else if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		{
			return (-1);
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	return (length);
}
