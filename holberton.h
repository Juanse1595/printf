#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct cases - cases is a structure that contain the
 * possible options of format specifiers in printf
 * and every option has its own function pointer
 * @letter: format specifier
 * @f: function pointer
 */
/* test */
typedef struct cases
{
	char *letter;
	int (*f)(va_list);
} option;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int (*aux_function(const char *format))(va_list);
int case_percentage(const char *format, va_list list);
int print_integer(va_list);
int print_rot13(va_list);
int print_rev(va_list);
int print_bin(va_list);
int print_hex_minus(va_list);
int print_hex_mayus(va_list);
int print_address(va_list);
int print_S(va_list);
int print_u(va_list);
int print_o(va_list);

void _print_rev(char *s);
int _abs(int n);


#endif /* _HOLBERTON_H_ */
