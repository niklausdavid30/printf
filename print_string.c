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
