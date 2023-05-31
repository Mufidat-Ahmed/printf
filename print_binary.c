#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - prints an unsigned int argument in binary
 * @format: character string to be used
 * @...: differnt arguments contained in the function
 * Return: 0
 */

int _print_binary(const char *format, ...)
{
	va_list bin;

	va_start(bin, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == 'b')
		{
			int m;

			for (m = 31; m >= 0; m--)
			{
				unsigned int z = va_arg(bin, unsigned int);

				char binary = (z & (1u << m)) ? '1' : '0';

				_putchar(binary);
			}
			format++;
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(bin);
	return (0);
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
