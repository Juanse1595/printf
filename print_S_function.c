#include "main.h"

/**
 * print_S - Print not printable characters in Hex upper case
 * @S: input char to print;
 * Return: number of printed chars
 */

int print_S(va_list S)
{
	char *input = va_arg(S, char *), split[2], *codification;
	int i = 0, counter = 0;

	codification = "0123456789ABCDEF";

	if (input == NULL)
		input = "(null)";
	while (input[i])
	{
		if (input[i] <= 31 || input[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			split[0] = input[i] / 16;
			split[1] = input[i] % 16;

			counter += _putchar(codification[(int)split[0]]);
			counter += _putchar(codification[(int)split[1]]);
		}
		else
		{
			counter += _putchar(input[i]);
		}
		i++;
	}
	return (counter);
}
