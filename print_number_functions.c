#include "holberton.h"

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

int print_hex_minus(va_list num)
{int n = va_arg(num, int);
	int aux = n, i = 0, j = 0, k, a = 1, aux2 = 0, count = 0;
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
10, 11, 12, 13, 14, 15, -1};
	char arr2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
'a', 'b', 'c', 'd', 'e', 'f'};

	while (aux > 15)
	{
		aux = aux / 16;
		i++;
	}
	while (i > 0)
	{
		while (j < i)
		{
			a = a * 16;
			j++;
		}
		aux2 = n / a;
		for (k = 0; arr1[k] >= 0; k++)
		{
			if (arr1[k] == aux2)
			{
				_putchar(arr2[k]);
				count++;
				break;
			}
		}
		i--, n = n % a, j = 0, a = 1;
	}
	for (k = 0; arr1[k] >= 0; k++)
	{
		if (arr1[k] == n)
		{
			_putchar(arr2[k]);
			count++;
			break;
		}
	}
	return (count);
}

/**
 * print_hex_mayus - prints a num in hexadecimal (MAYUS)
 * @num: number to be printed
 * Return: count of char printed
 */

int print_hex_mayus(va_list num)
{int n = va_arg(num, int);
	int aux = n, i = 0, j = 0, k, a = 1, aux2 = 0, count = 0;
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
10, 11, 12, 13, 14, 15, -1};
	char arr2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
'A', 'B', 'C', 'D', 'E', 'F'};

	while (aux > 15)
	{
		aux = aux / 16;
		i++;
	}
	while (i > 0)
	{
		while (j < i)
		{
			a = a * 16;
			j++;
		}
		aux2 = n / a;
		for (k = 0; arr1[k] >= 0; k++)
		{
			if (arr1[k] == aux2)
			{
				_putchar(arr2[k]);
				count++;
				break;
			}
		}
		i--, n = n % a, j = 0, a = 1;
	}
	for (k = 0; arr1[k] >= 0; k++)
	{
		if (arr1[k] == n)
		{
			_putchar(arr2[k]);
			count++;
			break;
		}
	}
	return (count);
}
