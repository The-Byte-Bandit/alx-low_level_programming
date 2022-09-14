#include "main.h"
/**
 * jack_bauer - Check description
 * Description: Prints every minute of the day starting from 00:00 to 23:59
 * Return: Nothing.
 */
void jack_bauer(void)
{

	int i, b;

	for (i = 0; i < 24; i++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			
		}
	}
}
