#include"main.h"

/**
 *  _strlen -returns length of array.
 * @s: address of variable s
 *
 * Return: nothing
*/

int _strlen(char *s)
{
	int i;
	int g = 0;

	for (i = 0; s[i]!='\0'; ++i)
	{
	g++;
	}
	return (g);
}
