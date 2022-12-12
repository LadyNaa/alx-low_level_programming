#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 10; digit++)
	{
		putchar(48 + digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

	putchar('\n');
	return (0);
	}

}
