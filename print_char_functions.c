/**
 * print_char - prints a char
 * @c: Char to print 
 * Return: length of char
 */

int print_char(va_list c)
{
	char x = va_arg(c, int);
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
	for (i = 0; word[i]; i++)
	{
		_putchar(word[i]);
	}
	return (i);
}
