#include "function_pointers.h"
/**
 *int_index - series for an integer
 *@array: input array
 *@size: size of an array
 *@cmp: comparison function
 *Return: index of integer in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1)

	if (array && cmp != NULL)
	for (; i < size; i++)
		b = cmp(array[i]);
		if (b)
		return (i);
	return (-1);

}
