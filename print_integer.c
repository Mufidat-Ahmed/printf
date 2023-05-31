#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_integer - prints integers to stdout
 * @m: name of argument to be used
 * Return: integer
 */

int _print_integer(va_list m)
{
	int num = va_arg(m, int);
	int z = 0;

	_putchar(num);
	z += digits(num);
	return (z);
}
/**
* digits - Counts the digits in an integer
* @num: The integer variable to be used
* Return: The number of digits.
*/
int digits(int num)
{
	int z = 0;

	if (num == 0)
		return (1);
	if (num < 0)
		z++;
	while (num != 0)
	{
		num /= 10;
		z++;
	}
	return (z);
}
