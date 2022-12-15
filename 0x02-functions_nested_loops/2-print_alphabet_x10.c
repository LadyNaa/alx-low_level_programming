#include "main.h"

/**
 * print_alphabet_x10 - print lowcase alpha 10 times
 */
void print_alphabet_x10(void)
{
	int t;
	char low_a;

	for (t = 0; t <= 9; t++)
	{
		for (low_a = 'a'; low_a <= 'z'; low_a++)
			_putchar(low_a);
		_putchar('\n');
	}
}
