#include "main.h"

/**
 * print_to_98 - Check description
 * @n: input integer
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
 void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
		{
			_putchar(n);
			if (n == 98)
			continue;
			_putchar(',');
		}
	_putchar('\n');
	}
	else
	{
		for (n; n >= 98; n--)
		{
			_putchar(n);

			if (n == 98)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
