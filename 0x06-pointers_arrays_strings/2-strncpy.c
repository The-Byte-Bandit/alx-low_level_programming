#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	i = 0;

	if	(n < dest_len)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{

			dest[i] = src[i];
		}
		dest[i + 1] = '\0';
	}
	return (dest);
}
