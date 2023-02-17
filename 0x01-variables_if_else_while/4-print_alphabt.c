#include <stdio.h>


/**
 * main - Entry point
 *
 * Decscription: print all the letters except q and e, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while ( ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;

		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);

}
