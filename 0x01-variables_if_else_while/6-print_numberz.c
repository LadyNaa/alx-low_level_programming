#include <stdio.h>

/**
 * main - numbers of base 10 starting from 0 usetype char
 * Return: Always 0
 */
int main(void)
{
	int numbz;

	for (numbz = 0; numbz < 10; numbz++)
		putchar((numbz % 10) + '0');

	putchar("\n");

	return (0);
}
