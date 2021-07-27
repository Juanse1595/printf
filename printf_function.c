#include "holberton.h"

/**
 * _printf -This print the gived input (s)
 * @format: char to print
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	int i = 0, sum = 0;

	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i]) /* loop outside*/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				sum++;
			}
			else
			{
				f = aux_function(&format[i + 1]); /* i == %, send next value */
				if (f)
				{
					sum = sum + f(list); /* Print input and return an integer*/
					i++;
				}
				else
				{
					_putchar('%');
					_putchar(format[i + 1]);
					sum = sum + 2;
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}
	va_end(list);
	return (sum);
}
/**
 * aux_function - look and compare with the chars content in va_list
 * @format: pointer that has the address of format in 'i' position
 * Return: pointer to the adrress of the function or NULL if not match
 */
int (*aux_function(const char *format))(va_list)
{
	/*  int (*f)(va_list) */
	int j = 0;

	/* loop inside*/
	option rows[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_integer},
		{"d", print_decimal},
		{"R", print_rot13},
		{"r", print_rev},
		{"b", print_bin},
		{"x", print_hex},
		{"X", print_hex},
		{"p", print_address},
		{NULL, NULL}
	};

	while (rows[j].letter)
	{
		if (*(rows[j].letter) == *format)
		{
			/* return (rows[j].f);  this could be removed */
			break;
		}
		j++;
	}

	return (rows[j].f);
}
