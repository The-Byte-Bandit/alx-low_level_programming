#include"main.h"

/**
 *  _strlen -returns length of array.
 * @c: address of variable c
 *
 * Return: nothing
*/

int _strlen(char *s)
{
	int i = 0;
	int g = 0;
	char b = *s;

	for (i; b[i] != '\0'; i++)
	{
	g++;
	}
	return (g);
}
