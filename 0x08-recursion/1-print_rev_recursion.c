#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /*base case*/
	}
	_print_rev_recursion(s + 1); /*recursively call function with next character*/
	_putchar(*s); /*print current character of the string*/
}
