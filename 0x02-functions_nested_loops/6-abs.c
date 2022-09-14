#include "main.h"

/**
 * _abs - Check description
 * @n: an integer
 * Description: It returns the absolute value of n
 * Return: n.
 */
int _abs(int n)
{
	int value = 0;

	if (n < 0)
	{
	value = n * -1;
	}
	else
	{
	value = n;
	}
	return (value);
}
