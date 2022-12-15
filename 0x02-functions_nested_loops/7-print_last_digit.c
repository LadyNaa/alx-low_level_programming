#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: num
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int la_d = n % 10;

	if (la_d < 0)
		la_d = la_d * -1;

	_putchar(la_d + '0');

	return (la_d);
}
