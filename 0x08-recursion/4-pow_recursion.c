#include "main.h"

/**
 * _pow_recursion - a function that returns x to power y.
 * @x: base number.
 * @y: incrementor.
 * Return: Power of x.
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		{
			return (x);
		}
		else if (y < 0)
		{
			return ( -1);
		}

	x *= _pow_recursion(x, y - 1);
	if (y == 0)
		return (1);
	return (x);
}
