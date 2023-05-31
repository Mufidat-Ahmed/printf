#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - prints integers to stdout
 * @format: character string to be used
 * @...: different argument contained in the function
 * Return: integer
 */

int _print_integer(const char *format, ...)
{
	va_list m;

	va_start(m, format);
	while (*format != '\0')
	{
		if (*format == 0)
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					{
						int b = va_arg(m, int);
						int len = snprintf(NULL, 0, "%d", b);
						char *integer = malloc(sizeof(char) * (len + 1));

						sprintf(integer, "%d", b);
						fputs(integer, stdout);
						free(integer);
						break;
					}
				default:
					putchar(*format);
					break;
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(m);
	return (0);
}
