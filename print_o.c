#include "holberton.h"

/**
 * print_o - prints number in octal notation
 * @o: number to print
 * Return: number of digits printed
 */


int print_o(va_list o)
{
	unsigned long int number = va_arg(o, unsigned long int);
	int counter = 0;
	char store[100];

	if (number > 4294967295)
	{
		return (_printf("1777"));
	}

	store[counter] = number % 8 + '0';
	while (number / 8)
	{
		number /= 8;
		counter++;
		store[counter] = number % 8 + '0';
	}
	store[counter + 1] = '\0';

	_print_rev(store);
	return (counter + 1);
}
