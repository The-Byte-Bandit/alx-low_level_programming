#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
*  print_name - A function that prints a name.
*@name: string to check
*@f: callback funcction
*Return: 1 is numm, 0 not num
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);

}
