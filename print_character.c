#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints out using s and c format specifiers
 * @format: character string to be used starting with 0
 * ...: argument containing various arguments
 * Return: m
 */

int _printf(const char *format, ...)
{
	va_list z;
	int m = 0;

	va_start(z, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write(1, "%", 1);
				m++;
			}
			else if (*format == 'c')
			{
				int d = va_arg(z, int);

				_putchar(d);
				m++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(z, char *);
				int p = 0;

				while (s[p] != '\0')
				{
					_putchar(s[p]);
					m++;
				}
			}
			else
			{
				write(1, "%", 1);
				m++;
				write(1, format, 1);
				m++;
			}
		}
		else
		{
			write(1, format, 1);
			m++;
		}
		format++;
	}
	va_end(z);
	return (m);
}
