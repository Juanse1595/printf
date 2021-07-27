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
int print_integer(va_list);
int print_decimal(va_list);
int print_rot13(va_list);
int print_rev(va_list);
int print_bin(va_list);
int print_hex(va_list);

void _print_rev(char *s);
int _abs(int n);


#endif /* _HOLBERTON_H_ */
