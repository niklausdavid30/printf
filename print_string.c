#include "main.h"

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

int printf_string(va_list argms)
{
	char *s;
	int i, len;

	s = va_arg(argms, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
* print_rot13 - Prints the rot13'ed string
* @argms: Variadic list of arguments
* Return: Number of printed chars or -1 if failure
*/

int print_rot13(va_list argms)
{
const char *s = va_arg(argms, const char *);
int printed_chars = 0, i;

if (s == NULL)
{
s = "(null)";

for (i = 0; s[i]; i++)
_putchar(s[i]);
return (i);
}

while (*s)
{
char c = *s;
if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
{
char base = (c >= 'a') ? 'a' : 'A';
_putchar((c - base + 13) % 26 + base);
}
else
{
_putchar(c);
}
s++;
printed_chars++;
}

return (printed_chars);
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
