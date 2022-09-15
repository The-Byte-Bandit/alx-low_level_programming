#include "main.h"

/**
 * print_to_98 - Check description
 * @n: input integer
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int v;
	
	if (n < 99)
	{
		for (v = n; v < 99; v++)
	{
		_putchar(v/10 + '0');
		_putchar(v%10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	}
	else if (n > 97)
	{
		for (v = n; v > 97; v--)
		{
		_putchar(v/10 + '0');
		_putchar(v%10 + '0');
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
