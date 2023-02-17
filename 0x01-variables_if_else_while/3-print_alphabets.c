#include <stdio.h>

/**
 * main - Entry point
 *
 * Decscription: print the alphabet in lowercase then in uppercase followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z */
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*prints A -Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
