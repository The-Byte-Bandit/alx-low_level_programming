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
				_putchar("0", i, b);
				_putchar("0 ", i, b);
				_putchar('\n');
			}
			else if (b > 9 && i < 10)
			{
				_putchar("\n 0%d %d", i, b);
			}
			else if (i > 9 && b < 10)
			{
				_putchar("\n %d 0%d", i, b);
			}
			
			else
			{
				_putchar("\n %d %d", i, b);
			}
			
		}
	}
}
