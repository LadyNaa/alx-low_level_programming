#include "main.h"

/**
 * _islower - checks lowcase alpha
 * @c: character
 * Return: 1 if alphabet is lowc, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
