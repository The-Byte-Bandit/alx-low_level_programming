#include"main.h"

/**
 *  _strlen -returns length of array.
 * @c: address of variable c
 *
 * Return: nothing
*/

int _strlen(char *s)
{
	int i;
	int g = 0;

	for (i; s[i] != '\0'; i++)
	{
	g++;
	}
	return (g);
}
