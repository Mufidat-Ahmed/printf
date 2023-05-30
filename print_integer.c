#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - printf statement that handle %d and %i
 * @format: character string to be used
 * @...: various arguments
 * Return: z
 */

int _printf(const char *format, ...)
{
	va_list m;

	va_start(m, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					{
						int num = va_arg(m, int);
						
					}
			}
		}
}
