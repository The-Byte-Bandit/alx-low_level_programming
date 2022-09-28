#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, g;

	for (i = 0; i < n; i++)
{
	g = a[i];
	a[i] = a[n - 1];
	a[n - 1] = g;
	n--;
}
}
