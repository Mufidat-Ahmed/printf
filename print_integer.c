#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _print_integer - prints integers to stdout
 * @format: pointer character to be used
 * ...: various arguments present in function
 * Return: integer
 */

int _print_integer(const char *format, ...)
{
	char *mem;
	int z = 0, i, git, num;
	va_list m;

	va_start(m, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
			if (num < 0)
			{
				num = va_arg(m, int);
				_putchar('-');
				z++;
				num = -num;
			}
			}
			if (num == 0)
			{
				_putchar('0');
				z++;
			}
			else
			{
				int t = 0, digit = num;

				while (digit > 0)
				{
					digit /= 10;
					t++;
				}
				mem = malloc(sizeof(char) * (t + 1));

					if (mem == NULL)
					{
						va_end(m);
						return (-1);
					}
				git = t - 1;

				while (num > 0)
				{
					int new = num % 10;

					mem[git] = '0' + new;
					num /= 10;
					new--;
				}
				mem[t] = '\0';
				for (i = 0; i < t; i++)
				{
					_putchar(mem[i]);
					z++;
				}
				free(mem);
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
	return (0);
}
