#include "main.h"
/**
 * squrecheck - a function that checks for square root.
 * _sqrt_recursion - this function runs another function which checks for square root.
 * @n: an input integer.
 * @i: an input integer.
 * Return: Natural square root.
 */

/**
 * _sqrt_recursion - Runs another function which checks for square root.
 * @n: an input integer.
 * Return: Natural square root.
 */
int squrecheck(int n, int i)
{
	if (i == n)
	{
		return (-1);
	}
	else if (i * i == n)
		return (i);
	n = squrecheck(n, i + 1);
	return (n);
}
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	n = squrecheck(n, 1);
	return (n);
}
