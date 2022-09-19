#include"main.h"

/**
 * print_rev - prints in reverse.
 * @s: address of variable s
 *
 * Return: null.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
