#include"main.h"

/**
 * print_rev - prints in reverse.
 * @s: address of variable s
 *
 * Return: null.
*/

void print_rev(char *s)
{
	int i, g;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		g++;
	}
	for (b = g; b >= 0; b--)
	{
	_putchar(s[8]);
	}
	_putchar('\n');
}
