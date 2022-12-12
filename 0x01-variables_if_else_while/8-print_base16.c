#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int number;
	char lowalpha;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (lowalpha = 'a'; lowalpha <= 'f'; lowalpha++)
		putchar(lowalpha);

	putchar('\n');

	return (0);
}
