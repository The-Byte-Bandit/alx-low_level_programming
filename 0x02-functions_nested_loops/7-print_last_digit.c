#include "main.h"

/**
 * print_last_digit - Check description
 * @n: name of variable to be operated on
 * Description: It returns the last digit of the given variable
 * Return: Nothing.
 */
int print_last_digit(int n)
/* start of function */
{
	int chum = n % 10;

	if (chum < 0)
	{
	chum *= -1;
	}
	_putchar(chum + '0');
	return (chum);
}
