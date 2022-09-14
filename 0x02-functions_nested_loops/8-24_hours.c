#include "main.h"

/**
 * jack_bauer - Check description
 * Description: Prints every minute of the day starting from 00:00 to 23:59
 * Return: Nothing.
 */
void jack_bauer(void)
/* start of function */
{
	int vim1 = 0;
	int vim2 = 0;
	int i;
	int b;

	for(i = 0; i < 24; i++ )
	{
		for(b = 0; b < 60; b++)
		{
			if(b < 10 && i < 10)
			{
				_putchar('0' + i);
				_putchar('\t);
				_putchar('0' + b);
				_putchar('\n');
			}
			else if (b > 9 && i < 10)
			{

				_putchar('0' + i);
				_putchar('\t);
				_putchar(b);
				_putchar('\n');
			}
			else if (i > 9 && b < 10)
			{
				_putchar(i);
				_putchar('\t);
				_putchar('0' + b);
				_putchar('\n');
			}
	
			else
			{
				_putchar(i);
				_putchar('\t);
				_putchar(b);
				_putchar('\n');
			}
			
		}
	}
}
