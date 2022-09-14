#include "main.h"
/**
 * jack_bauer - Check description
 * Description: Prints every minute of the day starting from 00:00 to 23:59
 * Return: Nothing.
 */
void jack_bauer(void)
{

	int i;
	int b;
	char g = '0';

	for (i = 0; i < 24; i++)
	{
		fo r(b = 0; b < 60; b++)
		{
			i f(b < 10 && i < 10)
			{
				_putchar(g);
				_putchar(i);
				_putchar('\t');
				_putchar(g);
				_putchar(b);
				_putchar('\n');
			}
			else if (b > 9 && i < 10)
			{
				_putchar(g);
				_putchar(i);
				_putchar('\t');
				_putchar(b);
				_putchar('\n');
			}
			else if (i > 9 && b < 10)
			{
				_putchar(i);
				_putchar('\t');
				_putchar(g);
				_putchar(b);
				_putchar('\n');
			}

			else
			{
				_putchar(i);
				_putchar('\t');
				_putchar(b);
				_putchar('\n');
			}
			
		}
	}
}
