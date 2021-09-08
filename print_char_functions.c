#include "main.h"

/**
 * print_char - prints a char
 * @c: Char to print
 * Return: length of char
 */

int print_char(va_list c)
{
	char x = va_arg(c, int);

	_putchar(x);
	return (1);
}

/**
 * print_str - prints a string
 * @s: pointer to first char
 * Return: length of char
 */

int print_str(va_list s)
{
	char *word = va_arg(s, char *);
	int i;

	if (word == 0)
		return (_printf("(null)"));
	for (i = 0; word[i]; i++)
	{
		_putchar(word[i]);
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: length of string
 */

int print_rev(va_list s)
{
	char *str = va_arg(s, char *);
	int i, j;

	for (i = 0, j = 0; str[i]; i++, j++)
	{}
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (j);
}

/**
 * print_rot13 - prints a string with rot13 format
 * @s: pointer to string to be changed
 * Return: length of string
 */

int print_rot13(va_list s)
{
	char *arr1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *arr2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	char *original = va_arg(s, char *);
	int i, j;

	for (i = 0; original[i]; i++)
	{
		for (j = 0; arr1[j]; j++)
		{
			if (original[i] == arr1[j])
			{
				_putchar(arr2[j]);
				break;
			}
		}
		if (j == 52)
			_putchar(original[i]);
	}
	return (i);
}
