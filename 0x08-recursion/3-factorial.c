#include "main.h"

/**
 * factorial - a function that returns factorial of n.
 * @n: an input integer.
 * Return: factorial of n.
 */

int factorial(int n)
{
	int i = 0;

	if (n < 1 && n >= 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	i += n * factorial(n - 1);
	return (i);
}
