#include <main.h>

/**
* print_char - Prints characters
* @argms: Variadic list of arguments
* Return: 1 (Success) or -1 if failure
*/

int print_char(va_list argms)
{
  char value = va_arg(argms, int);
  _putchar(value);
  return (1);
}

/**
* print_string - Prints strings
* @argms: Variadic list of arguments
* Return: Number of printed chars or -1 if failure
*/

int print_string(va_list argms)
{
  int i;
  const char *s = va_arg(argms, const char *)
  for (i = 0; s[i] != '\0'; i++)
      _putchar(s[i]);
  return (i);
}

/**
* print_reversed_string - Prints a string in reverse.
* @argms: String to print
* Return: The number of chars printed or -1 if failure
*/

int print_reversed_string(va_list argms)
{
	int length, i;
	char *str = va_arg(argms, char *);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		return (i);
	}

	length = _strlen(str);

	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);

	return (length);
}
