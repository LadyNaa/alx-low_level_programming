#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char low_a;

	for (low_a = 'a'; low_a <= 'z'; low_a++)
		_putchar(low_a);

	_putchar('\n');
}
