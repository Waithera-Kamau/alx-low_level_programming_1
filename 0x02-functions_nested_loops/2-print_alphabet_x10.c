#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * Description: prints the alphabet 10 times on a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
