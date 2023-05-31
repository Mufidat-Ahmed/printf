#include "main.h"

/**
 * _printf - Prints formatted output to stdout
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;
            if (*format == '%')
            {
                putchar('%');
                count++;
            }
            else if (*format == 'c')
            {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                int i = 0;
                while (str[i] != '\0')
                {
                    putchar(str[i]);
                    count++;
                    i++;
                }
            }
        }
        else
        {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}

