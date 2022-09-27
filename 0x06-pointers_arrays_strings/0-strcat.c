#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	i = 0;
	for (; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
