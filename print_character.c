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
			if (*format == 'c')
			{
				int m = va_arg(z, int);

				_putchar('c');
				m++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(z, char *);

				while (*s)
				{
					_putchar(*s);
					s++;
					m++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				m++;
			}
		}
		else
		{
			_putchar(*format);
			m++;
		}
		format++;
	}
	va_end(z);
	return (m);
}
