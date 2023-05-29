#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int print_integer(int b);
int print_binary(unsigned int b);
int print_variables(unsigned int b, int bin, int capital);
int print_octex(unsigned int b);
int print_x(unsigned int b, int capital);
int print_buffer(char *buffer, int buffer_index);
int print_special(const char *str);
int print_pointer(void *point);
int print_plus(int plus, int space);
int print_hash(unsigned int b, int capital);
int print_height(int b);
int print_length(int b);
int print_width(int b, int align, int zero);
int print_accurate(int b, int accurate);
int print_zero(int b, int width, int left);
int print_minus(int b, int width);
int print_reverse(const char *str);
int print_Rot13(const char *str);
void write (const char str, const char *b, int c);

#endif
