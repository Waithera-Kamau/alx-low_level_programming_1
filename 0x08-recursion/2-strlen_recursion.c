#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to count
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	/*Base case: If the string is empty or NULL, return 0*/
	if (*s == '\0')
		return 0;

	/*Recursive case: Add 1 to the length of the string without the first character*/
	return (1 + _strlen_recursion(s + 1));
}
