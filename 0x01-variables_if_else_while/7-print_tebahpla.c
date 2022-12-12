#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char loweralpha;

	for (loweralpha = 'z'; loweralpha >= 'a'; loweralpha--)
		putchar(loweralpha);

	putchar('\n');

	return (0);
}
