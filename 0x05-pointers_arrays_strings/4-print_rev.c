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

	for (i = 0; s[i] != '\0'; i++)
	{
		g++;
	}
	g--;
	for (; g >= 0; g--)
	{
	_putchar(s[g]);
	}
	_putchar('\n');
}
