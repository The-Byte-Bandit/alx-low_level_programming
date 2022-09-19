#include"main.h"

/**
 * swap_int -swaps the value of the given variables.
 * @a: address of variable a
 * @b: address of variable b
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}
