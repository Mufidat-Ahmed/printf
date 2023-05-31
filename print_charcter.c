#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Prints formatted output to stdout
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list m;
	int z = 0;

	va_start(m, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				_putchar('%');
				z++;
			}
			else if (*format == 'c')
			{
				int b = va_arg(m, int);

				_putchar(b);
				z++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(m, char *);
				int i = 0;

				while (str[i] != '\0')
				{
					_putchar(str[i]);
					z++;
					i++;
				}
			}
		}
		else
		{
			_putchar(*format);
			z++;
		}
		format++;
	}
	va_end(m);
	return (z);
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
