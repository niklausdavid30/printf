#include <main.h>

/**
* print_char - Prints characters
* @argms: Variadic list of arguments
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
* print_percent - Prints percent
* @argms: Variadic list of arguments
*/

int print_percent(va_list argms)
{
	_putchar('%');
	return (1);
}
