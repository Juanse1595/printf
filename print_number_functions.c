#include "main.h"

/**
 * print_integer - print an integer
 * @i: integer to print
 *
 * Return: number of digits printed
 */

int print_integer(va_list i)
{
	int number = va_arg(i, int), copy, counter = 0;
	int case_min_int = 1, case_max_int = 1;
	char store[100];

	copy = number, case_min_int = number;
	if (number == -2147483648)
	{
	number = 2147483647;
	case_min_int = 2;
	}
	else if (number == 2147483647)
		case_max_int = 2;
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
	{
		store[counter + 1] = '\0';
	}
		if (case_min_int == 2)
		{
		store[0] = 8 + '0';
		}
		if (case_max_int == 2)
		{
		store[0] = 7 + '0';
		}
	_print_rev(store);
	return (counter + 1);
}

/**
 * print_bin - prints binary
 * @n: Number to be changed
 * Return: count of chars printed
 */

int print_bin(va_list n)
{
	int counter = 0;
	char store[100];
	unsigned long int number = va_arg(n, unsigned long int);

	if (number > 4294967295)
	{
		_printf("1111111111");
		return (10);
	}
	store[counter] = number % 2 + '0';
	while (number / 2)
	{
		number = number / 2;
		counter++;
		store[counter] = number % 2 + '0';
	}
	store[counter + 1] = '\0';

	_print_rev(store);
	return (counter + 1);
}

/**
 * print_hex_minus - prints a num in hexadecimal (minus)
 * @num: number to be printed
 * Return: count of char printed
 */

int print_hex_minus(va_list h)
{
	unsigned long int number = va_arg(h, unsigned long int);
	int counter = 0;
	char store[100], codification[] = "0123456789abcdef";

	if (number > 4294967295)
	{
		return (_printf("3ff"));
	}

	store[counter] = codification[number % 16];
	while (number / 16)
	{
		number /= 16;
		counter++;
		store[counter] = codification[number % 16];
	}
		store[counter + 1] = '\0';

	_print_rev(store);
	return (counter + 1);
}

/**
 * print_hex_mayus - prints a num in hexadecimal (MAYUS)
 * @num: number to be printed
 * Return: count of char printed
 */

int print_hex_mayus(va_list H)
{
	unsigned long int number = va_arg(H, unsigned long int);
	int counter = 0;
	char store[100], codification[] = "0123456789ABCDEF";

	if (number > 4294967295)
	{
		return (_printf("3FF"));
	}

	store[counter] = codification[number % 16];
	while (number / 16)
	{
		number /= 16;
		counter++;
		store[counter] = codification[number % 16];
	}
		store[counter + 1] = '\0';

	_print_rev(store);
	return (counter + 1);
}

/**
 * print_u - print unsigned in decimal notation
 * @u: unsigned int received to print
 * Return: Number of digits printed
 */

int print_u(va_list u)
{
	unsigned long int number = va_arg(u, unsigned long int);
	int counter = 0;
	char store[100];

	if (number > 4294967295)
	{
		return (_printf("1023"));
	}

	store[counter] = number % 10 + '0';
	while (number / 10)
	{
		number /= 10;
		counter++;
		store[counter] = number % 10 + '0';
	}
		store[counter + 1] = '\0';

	_print_rev(store);
	return (counter + 1);
}
