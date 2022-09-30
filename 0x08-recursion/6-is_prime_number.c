#include "main.h"
/**
 * prime_check - a function that checks for prime number.
 * @a: an input integer.
 * @b: an input integer.
 * Return: Prime number.
 */

int prime_check(int a, int b)
{
		if (b == a )
		{
			return (1);
		}
		else if (a % b == 0 && b != 1)
		{
			return (0);
		}
		a = prime_check(a, b + 1);
		return (a);
}

/**
 * is_prime_number - Runs another function which checks for prime number.
 * @n: an input integer.
 * Return: Prime number.
 */

int is_prime_number(int n)
{
		if (n < 1 || n == 1)
		return (0);
		else if (n == 2)
		{
			return (1);
		}
		else
		n = prime_check(n, 1);
		return (n);
}
