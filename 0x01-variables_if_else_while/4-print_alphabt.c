#include <stdio.h>

/**
 * main - alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lc;

	while (lc = 'a'; lc <= 'z' lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}

	putchar('\n');
	return (0);
}
