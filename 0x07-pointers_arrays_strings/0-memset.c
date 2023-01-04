#include "main.h"

/**
 * _memset - fill a memory with constant byte
 * @s: start address memory
 * @b: desired byte
 * @n: number of byte to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
