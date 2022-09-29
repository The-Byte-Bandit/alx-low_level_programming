#include "main.h"

/**
 * _strlen_recursion - a function that returns length of string.
 * @s: an input string
 * Return: length of sting as int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i += _strlen_recursion(s + 1);
	i++;
	return (i);
}
