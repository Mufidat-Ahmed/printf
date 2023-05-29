#include "main.h"
#include <stdio.h>

/**
 * _printf - behaves like printf
 * @format: charcter ting to be used
 * main - entry point that cheks code
 * Return: 0 always success
 */
int _printf(const char *format, ...);

int main(void)
{
	char character_string = 'F';
	char string[] = "printf test";

	_printf("this is character %c\n", character_string);
	_printf("this is a string %s\n", string);
	_printf("this is a percent %%\n");
	return (0);
}
