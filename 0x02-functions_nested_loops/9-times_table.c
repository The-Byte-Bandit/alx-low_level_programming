#include "main.h"

/**
 * times_table - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void times_table(void)
/* start of function */
{
 	int vim1, i, b;

	for (i = 0; i < 10; i++ )
	{
		for (b = 0; b <10; b++)
		{
		vim1 = b*i;

			if ((vim1 / 10) == 0)
			{
				if (i != 0)
					_putchar(' ');
				_putchar(vim1 + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((vim1 / 10) + '0');
				_putchar((vim1 % 10) + '0');
				if (i == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
