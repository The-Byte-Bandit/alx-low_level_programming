#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - A function that prints a name.
*@array: array of integers
*@size: size of array
*@cmp: pointer to callback function.
*Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
}
