#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - A function that prints a name.
*@array: array of integers
*@size: size of array
*@cmp: pointer to callback function.
*Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0, b;

	if (array != NULL && size > 0 && cmp != NULL)
	{
	for (; i < size; i++)
	{
		b = cmp(array[i]);
		if (b > 0)
		{
		break;
		}
		return (-1);
	}
	return (i);
	}
	else if (size <= 0)
	return (-1);
}
