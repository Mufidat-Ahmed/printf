#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *_printf
  *
  *
  *
  *
  */
int _printf(const char *format, ...)
{	
	va_list m;	
	va_start(m, format);
	int char_printed = 0;

	if (format == NULL)
		return (-1);
	while (
