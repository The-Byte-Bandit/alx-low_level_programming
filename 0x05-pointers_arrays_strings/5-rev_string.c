#include"main.h"

/**
 * rev_string - prints in reverse.
 * @s: address of variable s
 *
 * Return: null.
*/

void rev_string(char *s)
{
	int i = 0;
	char v[];

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		v +=  s[i];
	}
	s = v;
	_putchar('\n');
}
