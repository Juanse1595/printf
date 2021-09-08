#include "main.h"

/**
 *_print_rev - Prints a string in reverse mode
 *@s: string to print
 *
 *Return: nothing
 */

void _print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}

/**
 * _abs - Return always a positive number
 * @n: number
 *
 * Return: positive number
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
