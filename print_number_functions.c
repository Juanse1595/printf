#include "holberton.h"

/**
 * print_integer - print an integer
 * @i: integer to print
 *
 * Return: number of digits printed
 */

int print_integer(va_list i)
{
	int number = va_arg(i, int);
	int copy, counter = 0;
	char store[50];

	copy = number;
	number = _abs(number);
	store[counter] = number % 10 + '0';
	while (number / 10)
	{
		number /= 10;
		counter++;
		store[counter] = number % 10 + '0';
	}
	if (copy < 0)
	{
		store[counter + 1] = '-';
		store[counter + 2] = '\0';
		counter++;
	}
	else
		store[counter + 1] = '\0';
	_print_rev(store);
	return (counter + 1);
}
/**
 * print_decimal - print a decimal
 * @d: decimal to print
 *
 * Return: number of digits printed
 */

int print_decimal(va_list d)
{
	int number = va_arg(d, int);
	int copy, counter = 0;
	char store[50];

	copy = number;
	number = _abs(number);
	store[counter] = number % 10 + '0';
	while (number / 10)
	{
		number /= 10;
		counter++;
		store[counter] = number % 10 + '0';
	}
	if (copy < 0)
	{
		store[counter + 1] = '-';
		store[counter + 2] = '\0';
		counter++;
	}
	else
		store[counter + 1] = '\0';
	_print_rev(store);
	return (counter + 1);
}
