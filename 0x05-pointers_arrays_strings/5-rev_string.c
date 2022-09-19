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
	int b;
	char v[] = "o";

	while (s[i] != '\0')
	{
		v[i] = s[i];
		i++;
	}

	for (b = 0; b <= i; b++)
	{
		s[b] = v[b];
	}

	_putchar('\n');
}
