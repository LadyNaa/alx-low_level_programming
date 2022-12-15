#include "main.h"

/**
 * print_sign - the sign of a num
 * @n: sign number to be printed
 * Return: 1 if num > 0
 * 0 if num is 0
 * -1 if num is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
