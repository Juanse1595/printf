#include "main.h"

/**
 * hex_to_string - Interpreting hex number like str
 * @number: input number
 * @lw: flag to use in lowercase
 * Return: number of charts printed
 */
int hex_to_string(unsigned long int number, int lw)
{
	char *codification, str[50];
	int i = 0;

	codification = (lw)
		 ? "0123456789abcdef"
		: "0123456789ABCDEF";

	while (number != 0)
	{
		str[i] = codification[number % 16];
		number /= 16;
		i++;
	}
	str[i] = '\0';
	_print_rev(str);

	return (i);
}
/**
 * print_address - print an Address case
 * @p: Adress to print
 * Return: number of charts printed
 */

int print_address(va_list p)
{
	int count = 2;
	unsigned long value = va_arg(p, unsigned long int);

	if (!value)
		return (_printf("(nil)"));

	_putchar('0');
	_putchar('x');
	count += hex_to_string(value, 1);

	return (count);
}
