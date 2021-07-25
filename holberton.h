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

typedef struct cases
{
	char *letter;
	int (*f)(va_list);
} option;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);


#endif /* _HOLBERTON_H_ */
