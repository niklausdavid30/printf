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
* print_reversed_string - Prints reversed string
* @argms: Variadic list of arguments
* Return: Number of printed chars or -1 if failure
*/

int print_reversed_string(va_list argms) {
    const char *s = va_arg(argms, const char *);
    int length = strlen(s);
    int printed_chars = 0;

    // Print the string in reverse order
    for (int i = length - 1; i >= 0; i--) {
        _putchar(s[i]);
        printed_chars++;
    }

    return printed_chars;
}
