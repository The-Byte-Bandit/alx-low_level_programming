#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - A function that prints a name.
*@array: array of integers
*@size: size of array
*@action: pointer to callback function.
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i,
	
	if(array != NULL && size > 0 && action != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i])
	}
}
