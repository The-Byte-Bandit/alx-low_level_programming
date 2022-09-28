#include "main.h"

/**
 * _puts_recursion - a function prints a sentence with newline.
 * @s: pointer to string
 * Return:0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	_putchar(*s);
	_puts_recursion((s+1));
}
