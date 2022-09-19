#include"main.h"

/**
 * rev_string - prints in reverse.
 * @s: address of variable s
 *
 * Return: null.
*/

void rev_string(char *s)
{
	int i = 0, j = 0, w;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		w = s[i];
		s[i--] = s[j];
		s[j++] = w;
	}
}
