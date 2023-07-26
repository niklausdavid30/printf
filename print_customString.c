#include "main.h"

/**
 * print_custom_string - Custom function 
 * to print strings with special formatting
 * @argms: Variadic list of arguments
 * Return: Number of printed chars
 */
int print_custom_string(va_list argms)
{
    int length = 0;
    char *str = va_arg(argms, char*);
    char *hex_rep;

    if (str == NULL)
    {
        length += write(1, "(null)", 6);
    }
    else
    {
        for (; *str; str++)
        {
            if ((*str > 0 && *str < 32) || *str >= 127)
            {
                length += write(1, "\\x", 2);
                hex_rep = "0123456789ABCDEF";
                length += write(1, &hex_rep[(*str >> 4) & 0x0F], 1);
                length += write(1, &hex_rep[*str & 0x0F], 1);
            }
            else
            {
                length += write(1, str, 1);
            }
        }
    }

    return (length);
}







